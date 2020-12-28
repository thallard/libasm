
global _ft_strcmp:

_ft_strcmp:
	mov		r11, rdi
	mov		r12, rsi
	xor		r10, r10
	jmp		compare_loop

compare_loop:
	mov		cl, r12[r10]
	cmp		BYTE r11[r10], cl
	ja		end_above
	jb		end_below
	je		end
	cmp		BYTE r11[r10], 0
	inc		r10
	je		end
	jne		compare_loop

end:
	mov		rax, 0
	ret

end_above:
	mov		rax, 1
	ret

end_below:
	mov		rax, -1
	ret
