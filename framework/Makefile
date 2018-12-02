# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 14:54:50 by bwan-nan          #+#    #+#              #
#    Updated: 2018/12/02 16:11:25 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

FLAGS = -Wall -Werror -Wextra


RADIC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	 ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_iswhitespace.c \
	 ft_itoa.c ft_lstadd.c ft_lstclr.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	 ft_memalloc.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memdel.c ft_memmove.c ft_memset.c ft_power.c ft_putchar.c ft_putchar_fd.c \
	 ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	 ft_show_tab.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
	 ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	 ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
	 ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c \
	 ft_toupper.c
LIB_FC = $(addprefix ./libft/, $(RADIC))
SRC = $(LIB_FC) launch_tests.c load_test.c
INCLUDES = libunit.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $ $(SRC) 
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all