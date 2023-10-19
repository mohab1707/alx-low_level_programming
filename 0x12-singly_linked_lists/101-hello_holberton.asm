section .data
    format db "Hello, Holberton", 0xA, 0
    ; format string with newline character (0xA)

section .text
global _start

_start:
    ; Call the C library initialization code
    call main

    ; Exit the program
    mov rax, 60                ; syscall number for sys_exit
    xor rdi, rdi               ; status code 0
    syscall
