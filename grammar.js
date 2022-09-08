module.exports = grammar({
  name: "asm",

  rules: {
    source_file: ($) => optional($._statement),

    _statement: ($) =>
      repeat1(choice($.function_definition, $.directive, $.comment)),

    function_definition: ($) =>
      seq(
        alias($.label, $.func_name),
        repeat1(
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
      seq(choice(/ld([a-z]+)?/, /st([a-z]+)?/), $.register, /(.*)/),

    pool_statement: ($) => seq($.label, $.directive),

    // TODO deal with the variable length of registers in the {}
    // pop {r0}
    // pop {r0 - r1}
    push_statement: ($) => seq(choice(/push+/, /pop+/), /(.*)/),

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
        /cmp+/,
        /lsl(s)?/,
        /lsr(s)?/
      ),

    return_statement: ($) => seq(/(bx)\s+/, $.register),

    // TODO: look into making this better for all comparisons
    branch_statement: ($) =>
      seq(
        choice(
          /(bl)\s+/,
          /(beq)\s+/,
          /(bne)\s+/,
          /(bcs)\s+/,
          /(bl([a-z]+)?)\s+/,
          /(bg([a-z]+)?)\s+/
        ),
        alias($.identifier, $.label)
      ),

    label: ($) => /(.*?):/,

    register: ($) => choice(/[r]\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][0-9a-zA-Z]+.*/,

    comment: ($) => choice(/@.*/, /#.*/),

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),

    identifier: ($) => /[A-z]+.*/,
  },
});
