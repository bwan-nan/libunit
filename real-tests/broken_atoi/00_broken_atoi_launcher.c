/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_broken_atoi_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:10:31 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/09 15:32:38 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int				broken_atoi_test_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_putstr("\033[1;33mBROKEN ATOI :\033[0m\n");
	load_test(&testlist, "Broken atoi basic test", &broken_atoi_basic_test);
	load_test(&testlist, "Broken atoi basic test", &broken_atoi_buserror_test);
	return (launch_tests(&testlist));
}
