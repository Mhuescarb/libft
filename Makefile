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

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
