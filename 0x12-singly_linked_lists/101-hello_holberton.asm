section .data
msg: db "Hello, Holberton", 10

section .text
global main

main:
;print message
mov rax, 1; syscall number for write
mov rdi, 1; stdout
mov rsi, msg;
mov rdx, 17; length of message
syscall

; Exit program
mov rax, 60; syscall number for exit
mov rdi, 0; return code 0
syscall
