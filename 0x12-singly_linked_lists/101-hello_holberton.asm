section .data
	hello db "Hello, Holberton", 0
section .text
	global main
extern printf
main:
	mov edi, hello
	call printf

	mov rax, 60
	xor edi, edi
	syscall
section .bss
