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
    load_statement: ($) =>
      seq(
        choice(/ldr+/, /ldrh+/, /ldrb+/, /str+/, /strh+/, /strb+/),
        $.register,
        /(.*)/
      ),

    // push {r0}
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
        /stm+/,
        /asr(s)?/,
        /and(s)?/,
        /bic(s)?/,
        /cmp+/,
        /ldm+/,
        /lsl(s)?/,
        /lsr(s)?/
      ),

    return_statement: ($) => seq(/(bx)\s+/, $.register),

    // TODO: look into making this better for all comparisons
    branch_statement: ($) =>
      seq(
        choice(/(bl)\s+/, /(beq)\s+/, /(ble)\s+/, /(bge)\s+/),
        choice($.identifier, $.label)
      ),

    // TODO: look into making this better
    // Somehow grab everything before the : too
    label: ($) => /(.*?):/,

    register: ($) => choice(/[r]\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][0-9a-zA-Z]+.*/,

    comment: ($) => choice(/@.*/, /#.*/),

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),

    identifier: ($) => /[A-z]+.*/,
  },
});
