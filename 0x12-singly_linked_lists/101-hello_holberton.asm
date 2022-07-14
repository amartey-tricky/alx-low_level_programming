;-------------------------------------------------------------------
; writes a 64-bit program in assembly that prints "Hello, Holberton"
; followed by a newline using the printf function
;-------------------------------------------------------------------

extern _printf

global _main

section .text
_main:
        push msg
        call _printf
        ret

section .data
msg:   db "Hello, Holberton\n", 10, 0
