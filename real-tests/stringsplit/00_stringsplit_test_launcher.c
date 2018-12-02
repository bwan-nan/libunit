/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_stringsplit_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:23:56 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:34:16 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

static void		ft_header(void)
{
	ft_putstr("*********************************\n");
	ft_putstr("   **** 42 - Unit Tests ****\n");
	ft_putstr("*********************************\n");
}

int				stringsplit_test_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_header();
	ft_putstr("STRINGSPLIT :\n");
	load_test(&testlist, "Basic test", &basic_test_stringsplit);
	load_test(&testlist, "Null test", &harder_test_stringsplit);
	load_test(&testlist, "Harder test", &harder_test_stringsplit);
	return (launch_tests(&testlist));
}
