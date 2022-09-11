module.exports = grammar({
  name: "asm",

  extras: ($) => [$.comment, /\s/, /\\\r?\n/, /\\( |\t|\v|\f)/],

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
        $.register,
        ",",
        $.register,
        ",",
        choice($.register, $.constant)
      ),

    // ldr r0, []
    // TODO: cheating here and combining ldr and ldm when they are somewhat different
    load_statement: ($) =>
      choice(
        seq($.load_opcode, $.register, /(.*)/)
        //$.ldm_statement,
      ),

    //ldm_statement: ($) => seq($.ldm_opcode, $.register, optional("!"), /,\s+\{/, $.register, /(.*)/),

    //ldm_opcode: ($) => choice(/ldm([a-z]+)?/, /stm([a-z]+)?/),
    //load_opcode: ($) => choice(/ldr([a-z]+)?/, /str([a-z]+)?/),
    load_opcode: ($) => choice(/ld([a-z]+)?/, /st([a-z]+)?/, /adr/),

    pool_statement: ($) => seq($.label, $.directive),

    // TODO deal with the variable length of registers in the {}
    // pop {r0}
    // pop {r0 - r1}
    push_statement: ($) => seq($.push_opcode, /(.*)/),

    push_opcode: ($) => choice(/push+/, /pop+/),

    simple_statement: ($) =>
      seq(
        $.opcode,
        $.register,
        optional(","),
        optional(choice($.register, $.constant))
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

    return_statement: ($) => seq($.branch_opcode, $.register),

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

    label: ($) => /(.*?):/,

    register: ($) => choice(/[r]\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][0-9a-zA-Z]+.*/,

    comment: ($) => choice(/@.*/, /#.*/),

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),

    identifier: ($) => /[_A-z0-9]+/,
  },
});
