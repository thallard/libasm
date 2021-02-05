global _ft_strlen

_ft_strlen:
	xor		rax, rax
	jmp		loop
increment:
	inc		rax

loop:
	cmp		byte [rdi + rax], 0
	jne		increment
	ret