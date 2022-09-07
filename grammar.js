module.exports = grammar({
  name: "asm",

  rules: {
    source_file: ($) =>
      choice(
        repeat($.function_definition),
        repeat($.directive),
        repeat($.comment)
      ),

    function_definition: ($) => seq($.function_label, repeat($._statement)),

    _statement: ($) =>
      choice(
        $.return_statement,
        $.branch_statement,
        $.math_statement,
        $.simple_statement
      ),

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

    // TODO: make this also acccept hex numbers too
    constant: ($) => /\d+/,
  },
});
