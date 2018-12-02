/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:16:51 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 23:14:29 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

static void		ft_header(void)
{
	ft_putstr("*********************************\n");
	ft_putstr("   **** 42 - Unit Tests ****\n");
	ft_putstr("*********************************\n");
}

int				basic_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_header();
	ft_putstr("BASIC :\n");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "KO test", &ko_test);
	load_test(&testlist, "Bus Error test", &buserror_test);
	load_test(&testlist, "Segfault test", &segfault_test);
	return (launch_tests(&testlist));
}
