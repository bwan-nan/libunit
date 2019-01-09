# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 11:41:56 by bwan-nan          #+#    #+#              #
#    Updated: 2019/01/09 15:20:02 by bwan-nan         ###   ########.fr        #
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

LIBFT = -L ../framework/libft/ -lft
FW_DIR = ../framework/
FW = $(addprefix $(FW_DIR), libunit.a)

all : $(NAME)

$(NAME):
	@make -C $(FW_DIR)
	@gcc $(FLAGS) $(SRC) $(FW) $(LIBFT) main.c -o $(NAME)
	@echo "\033[1;34mLib test\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@make clean -C $(FW_DIR)
	@/bin/rm -f *.o
	@echo "\033[1;34mLib test\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@make fclean -C $(FW_DIR)
	@/bin/rm -f $(NAME)
	@echo "\033[1;34mLib test\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

test: all
	./unit_test
