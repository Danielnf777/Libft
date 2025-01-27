NAME = libft.a

SRCS = ft_atoi.c ft_isascii.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_calloc.c ft_memset.c ft_strdup.c ft_strncmp.c ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c   


OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

HEADER = Header/

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c libft.h Makefile 
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all
