section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; write the string to the standard output
    mov edx, 13 ; length of the string
    mov ecx, hello ; pointer to the string
    mov ebx, 1 ; file descriptor for stdout
    mov eax, 4 ; system call for sys_write
    int 0x80 ; call the kernel

    ; write a newline character to the standard output
    mov edx, 1 ; length of the newline character
    mov ecx, newline ; pointer to the newline character
    mov ebx, 1 ; file descriptor for stdout
    mov eax, 4 ; system call for sys_write
    int 0x80 ; call the kernel

    ; exit with return code 0
    mov eax, 1 ; system call for sys_exit
    xor ebx, ebx ; return code 0
    int 0x80 ; call the kernel

section .data
    newline db 10 ; newline character
