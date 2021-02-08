
section .text
global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
	push	rdi
	call	_ft_strlen
	inc		rax

alloc:
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0
	jz		error
	pop		rsi

write_content:
	mov		rdi, rax
	call	_ft_strcpy
	ret

error:
	pop rdi
	ret