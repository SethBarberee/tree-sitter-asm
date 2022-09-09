module.exports = grammar({
  name: "asm",

  rules: {
    source_file: ($) => optional($._statement),

    _statement: ($) =>
      repeat1(choice($.function_definition, $.directive, $.comment)),

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
    load_statement: ($) => seq($.load_opcode, $.register, /(.*)/),

    load_opcode: ($) => choice(/ld([a-z]+)?/, /st([a-z]+)?/),

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
        /sub(s)?/,
        /add(s)?/,
        /mul(s)?/,
        /mov(s)?/,
        /asr(s)?/,
        /and(s)?/,
        /bic(s)?/,
        /orr(s)?/,
        /neg(s)?/,
        /mvn(s)?/,
        /cmp+/,
        /tst+/,
        /lsl(s)?/,
        /lsr(s)?/
      ),

    return_statement: ($) => seq(/(bx)\s+/, $.register),

    // TODO: look into making this better for all comparisons
    branch_statement: ($) => seq($.branch_opcode, alias($.identifier, $.label)),

    branch_opcode: ($) =>
      choice(
        /(bl)\s+/,
        /(beq)\s+/,
        /(bne)\s+/,
        /(bcs)\s+/,
        /(bcc)\s+/,
        /(bhi)\s+/,
        /(bhs)\s+/,
        /(bpl)\s+/,
        /(bl([a-z]+)?)\s+/,
        /(bg([a-z]+)?)\s+/
      ),

    label: ($) => /(.*?):/,

    register: ($) => choice(/[r]\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][0-9a-zA-Z]+.*/,

    comment: ($) => choice(/@.*/, /#.*/),

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),

    identifier: ($) => /[A-z]+.*/,
  },
});
