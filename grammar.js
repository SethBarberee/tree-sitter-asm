module.exports = grammar({
  name: 'asm',

  rules: {
    source_file: $ => repeat($.function_definition),

    function_definition: $ => seq(
        $.function_label,
        repeat($._statement),
    ),


    _statement: $ => choice(
      $.return_statement,
      $.math_statement,
      $.mov_statement,
    ),

    math_statement: $ => seq(
        $.math_operation,
        $.register,
        ',',
        $.register,
        ',',
        $.register,
    ),

    mov_statement: $ => seq(
        'mov',
        $.register,
        ',',
        choice(
            $.register,
            $.constant,
        ),
    ),


    math_operation: $ => choice(
        'sub',
        'add',
        'muls',
    ),

    // TODO: look into making this better
    function_label: $ => /[a-z]+[:]/,

    return_statement: $ => /(bx)\s+[a-z]+/,

    register: $ => /[r]\d+/,

    constant: $ => /\d+/,

  }
});

