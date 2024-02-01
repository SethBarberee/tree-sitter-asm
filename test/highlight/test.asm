,
@ <- punctuation.delimiter

@ hello
@ <- comment

.align 2,0
@ <- preproc

test:
@ <- function
    push {r0}
@        ^ punctuation.delimiter
@           ^ punctuation.delimiter
	ldm r3!, {r0}
@         ^ punctuation.delimiter
	ldr r0, [r0, #0x0]
@           ^ punctuation.delimiter
    add r0, r0, 0        @ mixed comment
@   ^ keyword
@       ^ variable.parameter
@           ^ variable.parameter
@               ^ constant
@                        ^ comment
_hello:
@ <- label
    bx lr
@   ^ keyword
@      ^ variable.parameter
.align 2,0
_08000340: .4byte gUnknown_202DCF8
@ <- label
@          ^ preproc
@                 ^ label
_08000344: .4byte 0x0400010e
@ <- label
@          ^ preproc
@                 ^ constant
