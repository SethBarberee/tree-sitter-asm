module.exports = grammar({
  name: 'asm',

  rules: {
    source_file: $ => choice(
        $.function_definition,
    ),


    function_definition: $ => /[[a-z]+][:]/,

    _statement: $ => choice(
      $.return_statement,
      // TODO: other kinds of statements
    ),


    add_statement: $ => seq(
        'add',
        $.register,
        ',',
        $.register,
        ',',
        $.register,
    ),

    return_statement: $ => seq(
        $.return_register,
        $.register,
    ),

    return_register: $ => /(bx)\s+/,

    //_expression: $ => choice(
    //  $.special_register,
    //  $.register,
    //  $.number,
    //  // TODO: other kinds of expressions
    //),

    special_register: $ => 'lr',

    register: $ => /[r]\d+/,

    number: $ => /\d+/,
  }
});

