,
@ <- punctuation.delimiter

@ hello
@ <- comment

@ TODO need to fix comment nesting for rest of highlight testing to work
test:
    add r0, r0, 0
    bx lr
@      ^ identifier
