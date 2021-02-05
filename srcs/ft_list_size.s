global _ft_list_size

_ft_list_size:
	push	r10
	xor		r10, r10

loop:
	cmp		rdi, 0
	jz		ret
	inc		r10
	mov		rdi, QWORD [rdi + 8]
	jmp		loop

end:
	mov		rax, r10
	pop		r10
	ret