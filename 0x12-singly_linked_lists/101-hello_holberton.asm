
<<<<<<< HEAD
  
	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

=======
	;;  File: 101-hello_holberton.asm
	;;  Auth: Brennan D Baraban
	;;  Desc: 64-bit assembly program that prints
	;;        Hello, Holberton followed by a new line.

	extern printf

	section .text
	global main

main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret

	section .data
msg:	 db "Hello, Holberton", 0
fmt:	 db "%s", 10, 0
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
