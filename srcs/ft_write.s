global _ft_write

extern ___error
_ft_write:
	mov		rax, 0x2000004
	syscall
	jc		error
	ret

error:
	push	r9
	mov		r9, rax
	call	___error
	mov		[rax], r9
	mov		rax, -1
	pop		r9
	ret