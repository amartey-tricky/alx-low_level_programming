;-------------------------------------------------------------------
; writes a 64-bit program in assembly that prints "Hello, Holberton"
; followed by a newline using the printf function
;-------------------------------------------------------------------

extern printf

global _start

section .text
_start :
	push message_str
	call printf
	ret

section .data
message_str : db "Hello, Holberton", 10, 0
