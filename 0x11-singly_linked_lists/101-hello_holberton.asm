extern printf			;the C function, to be called

	        section .data	; Data section, initialized variables
msg:		db "Hello, Holberton", 0 ; C string needs 0
fmt:		db "%s", 10, 0		 ;the printf format 10 is \n needed

	        section .text	; Code section.

	        global main	; the standard gcc entry point
main:				; the program label for the entry point
	        push    rbp	; set up stack frame, must be aligned
	mov	rbp, rsp
	mov	edi, fmt	; first parameter, format
	mov	esi, msg	; second parameter, msg
	call	printf		; call c function

	mov	eax,0		; or can be  xor  rax,rax

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret			; return
