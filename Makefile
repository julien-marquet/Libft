	# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarquet <jmarquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:49:46 by jmarquet          #+#    #+#              #
#    Updated: 2017/11/16 20:28:14 by jmarquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_HEAD = ./
PATH_SRCS = ./
SRCS = $(addprefix $(PATH_SRCS), ft_strreplace.c ft_strcutswap.c ft_strnfill.c ft_memsub.c ft_strswapfree.c ft_strcspn.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_strncpy.c ft_putchar.c ft_putstr.c ft_putendl.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_memalloc.c ft_memdel.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnequ.c ft_strnstr.c ft_atoi.c ft_isspace.c ft_putnbr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c ft_iscntrl.c ft_isblank.c ft_isgraph.c ft_ispunct.c ft_isxdigit.c ft_atof.c ft_pow.c ft_strcicmp.c ft_strncicmp.c ft_isprime.c ft_strndup.c)
OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CC = $(shell whereis gcc)
AR = $(shell whereis ar)
RM = $(shell whereis rm)

.PHONY: clean, fclean, all, re, test

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -rcs $(NAME) $(OBJ)
%.o:%.c
	$(CC) $(FLAGS) -c $< -I $(PATH_HEAD)
clean:
	$(RM) -f $(OBJ)
fclean: clean
	$(RM) -f $(NAME)
re: fclean all
	
