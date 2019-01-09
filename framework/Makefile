# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 14:54:50 by bwan-nan          #+#    #+#              #
#    Updated: 2019/01/09 15:14:45 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

FLAGS = -Wall -Werror -Wextra

SRC = launch_tests.c load_test.c

INCLUDES = libunit.h

all: $(NAME)

$(NAME):
	@make -C libft && make clean -C libft
	@gcc $(FLAGS) -c $(SRC)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@echo "\033[1;34mFramework\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@/bin/rm -f *.o
	@echo "\033[1;34mFramework\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)
	@echo "\033[1;34mFramework\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
