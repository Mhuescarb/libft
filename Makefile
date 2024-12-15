SRCS = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
       	ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
       	ft_memcpy.c \
		ft_memmove.c \

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re
