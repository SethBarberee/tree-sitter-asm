module.exports = grammar({
  name: "asm",

  rules: {
    source_file: ($) => optional($._statement),

    _statement: ($) =>
      repeat1(choice($.function_definition, $.directive, $.comment)),

    function_definition: ($) =>
      seq(
        repeat1(
          choice(
            $.math_statement,
            $.simple_statement,
            $.branch_statement,
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
        /sub+/,
        /add+/,
        /mul+/,
        /mov+/,
        /stm+/,
        /str+/,
        /asr+/,
        /and+/,
        /bic+/,
        /cmp+/,
        /ldm+/,
        /lsl+/,
        /lsr+/,
        /ldr+/,
        /push+/
        // /pop+/, // TODO pop causes bad things to happen
      ),

    return_statement: ($) => seq(/(bx)\s+/, $.register),

    // TODO: look into making this better for all comparisons
    branch_statement: ($) =>
      seq(
        choice(/(bl)\s+/, /(beq)\s+/, /(ble)\s+/),
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
