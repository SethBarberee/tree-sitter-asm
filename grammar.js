module.exports = grammar({
  name: "asm",

  rules: {
    source_file: ($) => optional($._statement),

    _statement: ($) =>
      repeat1(
        choice(
          $.function_definition,
          $.directive,
          $.comment,
          $.return_statement,
          $.branch_statement
        )
      ),

    function_definition: ($) =>
      seq($.function_label, repeat($.function_statement)),

    function_statement: ($) => choice($.math_statement, $.simple_statement),

    math_statement: ($) =>
      seq($.opcode, $.register, ",", $.register, ",", $.register),

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
        /ldr+/,
        /push+/,
        /pop+/
      ),

    // TODO: look into making this better
    function_label: ($) => /[A-z]+[:]/,

    return_statement: ($) => seq(/(bx)\s+/, $.register),

    branch_statement: ($) => /(bl)\s+[A-z]+/,

    register: ($) => choice(/[r]\d+/, /sp/, /lr/, /pc/),

    directive: ($) => /[.][a-z]+.*/,

    comment: ($) => /@.*/,

    constant: ($) => choice(/\d+/, /0[xX][0-9a-fA-F]+/),
  },
});
