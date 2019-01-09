/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_stringsplit_test_launcher.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:23:56 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/09 15:31:51 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

static void		ft_header(void)
{
	ft_putstr("\033[1;36m");
	ft_putstr("*********************************\n");
	ft_putstr("   **** 42 - Unit Tests ****\n");
	ft_putstr("*********************************\n");
	ft_putstr("\033[0m");
}

int				stringsplit_test_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_header();
	ft_putstr("\033[1;33mSTRINGSPLIT :\033[0m\n");
	load_test(&testlist, "Basic test", &basic_test_stringsplit);
	load_test(&testlist, "Null test", &harder_test_stringsplit);
	load_test(&testlist, "Harder test", &harder_test_stringsplit);
	return (launch_tests(&testlist));
}
