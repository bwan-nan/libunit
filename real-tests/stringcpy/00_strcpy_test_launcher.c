/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcpy_test_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:01:04 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 23:28:30 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int				stringcpy_test_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_putstr("STRINGCPY :\n");
	load_test(&testlist, "Basic test", &basic_test_strcpy);
	load_test(&testlist, "Segfault test", &segv_test_strcpy);
	load_test(&testlist, "Bus error test", &buserror_test);
	return (launch_tests(&testlist));
}
