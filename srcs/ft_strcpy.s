
global _ft_strcpy:

_ft_strcpy:	
	mov r11, rdi
	mov r12, rsi
	add r13, _ft_strlen r11
	jmp first_loop

inc:
	inc r11

first_loop:
	cmp byte [r11], 0
	jne inc
	je Lx

Lx:
    mov  r9,[r12]          
    mov  [r11],r9           
    inc  r11              
    inc  r12
    cmp byte [r12],0   ; Check for null terminator
    jne Lx                 ; loop if not null


end:
	mov rax, r11
	ret 