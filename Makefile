SRCS =	main.c 

SRCS_ASM =	srcs/ft_strlen.s \
			srcs/ft_strcpy.s \
			srcs/ft_strcmp.s

OBJS_ASM = ${SRCS_ASM:.c=.o}
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
			ar rc ${NAME} ${OBJS} srcs/ft_strlen.o srcs/ft_strcpy.o srcs/ft_strcmp.o

all:		${NAME}

clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean bonus fclean re
