,
@ <- punctuation.delimiter

@ hello
@ <- comment

# hello
@ <- comment

test:
@ <- function
    add r0, r0, 0        @ mixed comment
@   ^ keyword
@       ^ identifier
@           ^ identifier
@               ^ constant
@                        ^ comment
_hello:
@ <- label
    bx lr
@   ^ keyword
@      ^ identifier
