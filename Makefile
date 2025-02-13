# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 15:06:13 by ehossain          #+#    #+#              #
#    Updated: 2025/02/13 15:15:24 by ehossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_memset.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a
OBJECT = ${SOURCE:.c=.o} 
OBJECT_BONUS = ${BONUS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT)
	ar rcs $(NAME) $(OBJECT)
clean : 
	rm -f $(OBJECT) $(OBJECT_BONUS)
fclean : clean
	rm -f $(NAME) $(OBJECT_BONUS)
re : fclean all
bonus : $(OBJECT) $(OBJECT_BONUS)
	ar rcs  $(NAME) $(OBJECT_BONUS) $(OBJECT)

.PHONY: clean fclean re all
