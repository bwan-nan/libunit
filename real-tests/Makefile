# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 11:41:56 by bwan-nan          #+#    #+#              #
#    Updated: 2019/01/09 15:12:57 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: test

NAME = unit_test

FLAGS = -Wall -Werror -Wextra

SRC = 	./stringsplit/00_stringsplit_test_launcher.c \
		./stringsplit/01_basic_test_stringsplit.c \
		./stringsplit/02_harder_test_stringsplit.c \
		./stringsplit/03_null_test_stringsplit.c \
		./Project/ft_stringsplit.c \
		./Project/ft_stringcpy.c \
		./stringcpy/00_strcpy_test_launcher.c \
		./stringcpy/01_basic_test_strcpy.c \
		./stringcpy/02_segv_test_strcpy.c \
		./stringcpy/03_buserror_test.c \
		./Project/ft_atoii.c \
		./atoi/00_atoi_launcher.c \
		./atoi/01_basic_positive_test.c \
		./atoi/02_basic_negative_test.c \
		./atoi/03_zero_test.c \
		./atoi/04_plus_minus_test.c \
		./atoi/05_int_max_test.c \
		./atoi/06_int_min_test.c \
		./atoi/07_weird_test.c \
		./atoi/08_long_test.c \
		./atoi/09_long_neg_test.c \
		./broken_atoi/00_broken_atoi_launcher.c \
		./broken_atoi/01_broken_atoi_basic_test.c \
		./broken_atoi/02_broken_atoi_buserror_test.c \
		./Project/broken_atoi.c \

LIBFT = -L ../framework/libft/ -lft

FW_DIR = ../framework/
FW = $(addprefix $(FW_DIR), libunit.a)

all : $(NAME)

$(NAME):
	@make -C $(FW_DIR)
	@gcc $(FLAGS) $(SRC) $(FW) main.c $(LIBFT) -o $(NAME)
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
