; Borrowed some base highlighting groups from 
; https://github.com/Shirk/vim-gas/blob/2ca95211b465be8e2871a62ee12f16e01e64bd98/syntax/gas.vim#L1969 

; Lower priority to prefer @label when identifier appears in label.
;((identifier) @field (#set! "priority" 95)) 
;(identifier) @field 

[
 ","
 "!"
 "{"
 "}"
 "["
 "]"
] @punctuation.delimiter

(comment) @comment @spell

(register) @variable.parameter
(constant) @constant

(func_name (identifier)) @function
(label (identifier)) @label
(directive) @preproc
(include_statement) @preproc
(string) @string

[
    (load_opcode)
    (ldm_opcode)
    (adr_opcode)
    (branch_opcode)
    (push_opcode)
    (opcode)
 ] @keyword

(ERROR) @error
