global main
extern printf

main:
	mov	edi, format	; 	load the adddress of the format string
	xor	eax, eax	;	clear the eax register
	call	printf		;	call the printf function
	mov	eax, 0		;	set the return value to 0
	ret			;	return from the main function

format: db 'Hello, Holberton\n', 0 ; define a null-terminated format string
