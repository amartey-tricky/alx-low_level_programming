;-------------------------------------------------------------------
; writes a 64-bit program in assembly that prints "Hello, Holberton"
; followed by a newline using the printf function
;-------------------------------------------------------------------

global  _main
        extern _printf

_main:
        mov    edi, format
        xor    eax, eax
        call   _printf
        mov    eax, 0
        ret

format: db "Hello, Holberton\n", 0x
