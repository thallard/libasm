global _ft_strcpy

_ft_strcpy:
	push	r10
	push	r9
	xor		r10, r10


loop:
	cmp		byte [rsi + r10], 0
	je		end
	mov		r9b, [rsi + r10]
	mov		[rdi + r10], r9b
	inc		r10
	jne		loop

end:
	mov		byte [rdi + r10], 0
	mov		rax, rdi
	pop		r10
	pop		r9
	ret