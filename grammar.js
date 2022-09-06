module.exports = grammar({
  name: 'asm',

  rules: {
    source_file: $ => choice(
        repeat($.function_definition),
        repeat($.directive),
        repeat($.comment),
    ),

    function_definition: $ => seq(
        $.function_label,
        repeat($._statement),
    ),


    _statement: $ => choice(
      $.return_statement,
      $.branch_statement,
      $.math_statement,
      $.mov_statement,
    ),

    math_statement: $ => seq(
        $.opcode,
        $.register,
        ',',
        $.register,
        ',',
        $.register,
    ),

    mov_statement: $ => seq(
        $.opcode,
        $.register,
        ',',
        choice(
            $.register,
            $.constant,
        ),
    ),

    // TODO: fairly limited and only to ARM/THUMB for now since that's all I use
    opcode: $ => choice(
        /sub+/,
        /add+/,
        /mul+/,
        /mov+/,
        /stm+/,
        /str+/,
    ),

    // TODO: look into making this better
    function_label: $ => /[A-z]+[:]/,

    return_statement: $ => seq(
            /(bx)\s+/,
            $.register,
    ),

    branch_statement: $ => /(bl)\s+[A-z]+/,

    register: $ => choice(
            /[r]\d+/,
            /sp/,
            /lr/,
            /pc/,
    ),

    directive: $ => /[.][a-z]+/,

    comment: $ => /@.*/,

    constant: $ => /\d+/,

  }
});

