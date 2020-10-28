# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stoppery <stoppery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 19:48:37 by dsherie           #+#    #+#              #
#    Updated: 2020/10/28 22:58:17 by stoppery         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

FLAG=-Wall -Wextra -Werror

OBJ_PATH = ./objs/

SRC_NAME=	ft_bzero.c   \
		ft_memccpy.c \
		ft_memchr.c  \
		ft_memcmp.c  \
		ft_memcpy.c  \
		ft_memmove.c \
		ft_memset.c  \
		ft_strchr.c  \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c  \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

CC = gcc $(FLAG)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h