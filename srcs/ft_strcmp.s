global _ft_strcmp


_ft_strcmp:
	push	r9
	push	r10
	push	r13
	xor		r9, r9
	xor		r10, r10
	xor		r13, r13

loop:
	mov		r9b, byte [rdi + r13]
	mov		r10b, byte [rsi + r13]
	cmp		r10b, 0
	je		end
	cmp		r9b, 0
	je		end
	cmp		r10b, r9b
	jne		end
	inc		r13
	jmp		loop

end:
	sub		r9, r10
	mov		rax, r9
	pop		r9
	pop		r10
	pop		r13
	ret