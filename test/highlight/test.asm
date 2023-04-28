,
@ <- punctuation.delimiter

@ hello
@ <- comment

# hello
@ <- comment

.align 2,0
@ <- preproc

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
.align 2,0
_08000340: .4byte gUnknown_202DCF8
@ <- label
@          ^ preproc
@                 ^ label
_08000344: .4byte 0x0400010e
@ <- label
@          ^ preproc
@                 ^ constant
