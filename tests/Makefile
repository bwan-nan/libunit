# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 11:41:56 by bwan-nan          #+#    #+#              #
#    Updated: 2018/12/02 23:17:22 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: test

NAME = unit_test

FLAGS = -Wall -Werror -Wextra

SRC = ./basic/00_launcher.c \
	  ./basic/01_basic_test.c \
	  ./basic/02_ko_test.c \
	  ./basic/03_buserror_test.c \
	  ./basic/04_segfault_test.c \

FW_DIR = ../framework/
FW = $(addprefix $(FW_DIR), libunit.a)

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(FW) main.c -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: all
	./unit_test
