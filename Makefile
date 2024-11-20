SOURCE = ft_isalpha.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
		 ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		 ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
		 ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
		 ft_toupper.c ft_memcmp.c  ft_substr.c ft_strjoin.c ft_strtrim.c \
		 ft_split.c 

NAME = libft.a
OBJECT = ${SOURCE:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)
clean:
	rm -f $(OBJECT)
fclean: clean
	rm -f $(NAME)
re: fclean all

So:	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCE)
	gcc -nostartfiles -shared -o libft.so $(OBJECT)

.PHONY: clean fclean re all

