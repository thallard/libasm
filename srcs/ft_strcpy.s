
global _ft_strcpy:

_ft_strcpy:	
	mov r11, rdi
	mov r12, rsi
	mov r13, 0				; j = 0
	mov	r14, -1				; i = 0
	jmp first_loop			; loop

increment:
	inc r13					; j++

first_loop:
	cmp byte r11[r13], 0	; dest[j] != 0
	jne increment			; loop

second_loop:
	inc r14					; i++
	cmp byte r12[r14], 0	; src[i] != 0
	je end					; return 
	mov r9, r12[r14]		; temp = src[i]
	mov r11[r13],r9			; dest[j] = temp
	inc r13					; j++
	jne second_loop			; loop

end:
	mov rax, r11			; return dest
	ret