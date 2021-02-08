SRCS =	main.c 

SRCS_ASM =	srcs/ft_strlen.s \
			srcs/ft_strcpy.s \
			srcs/ft_strcmp.s \
			srcs/ft_write.s \
			srcs/ft_read.s \
			srcs/ft_strdup.s

OBJS_ASM = ${SRCS_ASM:.s=.o}
OBJS = ${SRCS:.c=.o}

HEADER = libasm.h

NAME = libasm.a

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

%.o: %.c	${HEADER}
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			nasm -f macho64 srcs/ft_strlen.s
			nasm -f macho64 srcs/ft_strcpy.s
			nasm -f macho64 srcs/ft_strcmp.s
			nasm -f macho64 srcs/ft_write.s
			nasm -f macho64 srcs/ft_read.s
			nasm -f macho64 srcs/ft_strdup.s
			ar rc ${NAME} ${OBJS} srcs/ft_strlen.o srcs/ft_strcpy.o srcs/ft_strcmp.o srcs/ft_write.o srcs/ft_read.o srcs/ft_strdup.o

all:		${NAME}

clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME} ${OBJS_ASM}

re: fclean all

.PHONY: all clean bonus fclean re
