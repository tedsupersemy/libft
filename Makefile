NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c 

SOURCES = ft_isdigit.c ft_isalpha.c ft_isascii.c \
ft_isalnum.c ft_tolower.c ft_toupper.c ft_isprint.c \
ft_strlen.c

OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(SOURCES) $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf libft.a

re: fclean all

.PhHONY: all clean fclean re