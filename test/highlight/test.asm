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
@       ^ parameter
@           ^ parameter
@               ^ constant
@                        ^ comment
_hello:
@ <- label
    bx lr
@   ^ keyword
@      ^ parameter
