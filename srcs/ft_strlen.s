

global _ft_strlen:
_ft_strlen:
			xor		rax, rax			; i = 0
			jmp		loop				; while (str[i] != 0)

inc:
			inc		rax;				; i++

loop:
			cmp	BYTE [rdi + rax], 0		; str[i] == 0 ?
			jne inc 
end:
			ret							; return i