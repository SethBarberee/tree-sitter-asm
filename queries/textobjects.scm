; call
(label) @call.outer

; comment
(comment) @comment.outer

; functions
(function_definition
    (_) @function.inner) @function.outer

; statement
(simple_statement
    (_) @statement.outer)

(load_statement
    (_) @statement.outer)

(push_statement
    (_) @statement.outer)

(return_statement
    (_) @statement.outer)

(math_statement
    (_) @statement.outer)

(pool_statement
    (_) @statement.outer)

[
    (register)
    (constant)
] @parameter.inner

[
    (register)
    (constant)
] @parameter.outer

