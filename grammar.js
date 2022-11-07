module.exports = grammar({
  name: "asm",

  word: ($) => $.identifier,

  //extras: ($) => [$.comment, /\s/, /\\\r?\n/, /\\( |\t|\v|\f)/],
  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => optional($._statement),

    _statement: ($) => repeat1(choice($.function_definition, $.directive)),

    function_definition: ($) =>
      seq(
        alias($.label, $.func_name),
        repeat(
          choice(
            $.math_statement,
            $.simple_statement,
            $.branch_statement,
            $.load_statement,
            $.ldm_statement,
            $.push_statement,
            $.pool_statement,
            $.label
          )
        ),
        $.return_statement
      ),

    math_statement: ($) =>
      seq(
        $.opcode,
        field("Rd", $.register),
        ",",
        field("Rn", $.register),
        ",",
        field("operand2", choice($.register, $.constant))
      ),

    // TODO: we need to better handle when [] or just a label and offsets
    // ldr r0, [r1]
    // ldr r0, _label
    // str r0, [r1, 0x1]
    // str r0, [r1, r2]
    load_statement: ($) =>
      seq(
        choice($.load_opcode, $.adr_opcode),
        field("Rt", $.register),
        ",",
        choice(
          field("label", alias($.identifier, $.label)),
          seq(
            "[",
            field("Rn", $.register),
            optional(","),
            optional(
              choice(
                field("offset", $.constant),
                field("regoffset", $.register)
              )
            ),
            "]"
          )
        )
      ),

    // NOTE: attempt to parse the above... breaks when labels are mixed in
    //seq(choice($.load_opcode, $.adr_opcode), field("Rt", $.register), ',', '[', $.register, ',', choice($.constant, $.register), ']'),

    ldm_statement: ($) =>
      seq(
        $.ldm_opcode,
        field("Rn", $.register),
        optional("!"),
        ",",
        "{",
        field("registers", commaSep($.reg_list)),
        "}"
      ),

    ldm_opcode: ($) => choice(/ldm([a-z]+)?/, /stm([a-z]+)?/),
    load_opcode: ($) => choice(/ldr([a-z]+)?/, /str([a-z]+)?/),
    adr_opcode: ($) => /adr/,

    pool_statement: ($) => seq($.label, $.directive),

    push_statement: ($) => seq($.push_opcode, "{", commaSep($.reg_list), "}"),

    // NOTE: this deal with the variable length of registers in the {}
    // pop {r0}
    // pop {r0 - r1}
    // pop {r0 - r1, lr}
    // pop {lr, r0 - r1}

    reg_list: ($) => choice($.register, seq($.register, "-", $.register)),

    push_opcode: ($) => choice(/push+/, /pop+/),

    simple_statement: ($) =>
      seq(
        $.opcode,
        field("Rd", $.register),
        optional(","),
        field("operand2", optional(choice($.register, $.constant)))
      ),

    // TODO: fairly limited and only to ARM/THUMB for now since that's all I use
    // TODO: should I split opcodes into categories to get more descriptive?
    opcode: ($) =>
      choice(
        /sub([a-z]+)?/,
        /sbc([a-z]+)?/,
        /ad[dc]([a-z]+)?/, // add/adc
        /mul([a-z]+)?/,
        /mov([a-z]+)?/,
        /[la]s[lr]([a-z]+)?/, // lsr, lsl, asl, asr
        /and([a-z]+)?/,
        /bic([a-z]+)?/,
        /eor([a-z]+)?/,
        /or[rn]([a-z]+)?/, // orr, orn
        /neg([a-z]+)?/,
        /mvn([a-z]+)?/,
        /msr([a-z]+)?/,
        /mrs([a-z]+)?/,
        /cm[pn]([a-z]+)?/, // cmp, cmn
        /rs[bc]([a-z]+)?/, // rsb/rsc
        /tst([a-z]+)?/,
        /teq([a-z]+)?/,
        /mar([a-z]+)?/,
        /mra([a-z]+)?/,
        /umull([a-z]+)?/,
        /umlal([a-z]+)?/,
        /smull([a-z]+)?/,
        /smlal([a-z]+)?/,
        /nop/
      ),

    return_statement: ($) => seq($.branch_opcode, field("Rm", $.register)),

    // TODO: look into making this better for all comparisons
    branch_statement: ($) => seq($.branch_opcode, alias($.identifier, $.label)),

    // TODO: make this simpler
    branch_opcode: ($) =>
      choice(
        /(b)\s+/,
        /(beq)\s+/,
        /(bne)\s+/,
        /(bc([a-z]+)?)\s+/,
        /(bh([a-z]+)?)\s+/,
        /(bpl)\s+/,
        /(bx)\s+/,
        /(bl([a-z]+)?)\s+/,
        /(bg([a-z]+)?)\s+/
      ),

    //label: ($) => /(.*?):/,
    label: ($) => seq($.identifier, ":"),

    register: ($) => choice(/r\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][0-9a-zA-Z]+.*/,
    //directive: ($) => prec.left(1, seq(/[.][0-9a-zA-Z]+/, commaSep($.identifier))),

    comment: ($) =>
      token(
        choice(
          seq("@", /(\\(.|\r?\n)|[^\\\n])*/),
          seq("#", /(\\(.|\r?\n)|[^\\\n])*/)
        )
      ),

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),

    //identifier: ($) => /[_A-z0-9]+/,
    identifier: ($) => /[a-zA-Z_]\w*/,
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSepTrailing(recurSymbol, rule) {
  return choice(rule, seq(recurSymbol, ",", rule));
}
