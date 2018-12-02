/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:27:19 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:12:15 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../framework/libft/libft.h"

static void		tests_checked(int count, int number_of_tests)
{
	ft_putchar('\n');
	ft_putnbr(count);
	ft_putchar('/');
	ft_putnbr(number_of_tests);
	ft_putstr(" tests checked\n");
}

static void		sig_handler(pid_t pid)
{
	if (WTERMSIG(pid) == 11)
		ft_putstr("\033[31m[SEGV]\033[0m\n");
	else if (WTERMSIG(pid) == 10)
		ft_putstr("\033[31m[BUSE]\033[0m\n");
	exit(3);
}

static void		fork_process(t_unit_test **testlist, int *pid)
{
	if (*pid < 0)
		return ;
	else if (*pid > 0)
		wait(&(*pid));
	else
	{
		signal(SIGSEGV, sig_handler);
		signal(SIGBUS, sig_handler);
		ft_putstr("\t > ");
		ft_putstr((*testlist)->test_name);
		ft_putstr(" : ");
		if ((*testlist)->test() == 0)
			exit(1);
		else
			exit(2);
	}
}

int				launch_tests(t_unit_test **testlist)
{
	int		valid_tests;
	int		number_of_tests;
	int		pid;

	number_of_tests = 0;
	valid_tests = 0;
	while (*testlist)
	{
		pid = fork();
		number_of_tests++;
		fork_process(testlist, &pid);
		if (WEXITSTATUS(pid) == 1)
		{
			valid_tests++;
			ft_putstr("\033[32m[OK]\033[0m\n");
		}
		else if (WEXITSTATUS(pid) == 2)
			ft_putstr("\033[31m[KO]\033[0m\n");
		else if (WIFSIGNALED(pid) == 1)
			sig_handler(pid);
		*testlist = (*testlist)->next;
	}
	tests_checked(valid_tests, number_of_tests);
	return (valid_tests != number_of_tests ? -1 : 0);
}
