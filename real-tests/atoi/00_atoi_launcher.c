/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:09:13 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:09:16 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int				atoi_test_launcher(void)
{
	t_unit_test		*testlist;

	testlist = NULL;
	ft_putstr("ATOI :\n");
	load_test(&testlist, "Basic (+ number) test", &basic_positive_test);
	load_test(&testlist, "Basic (- number) test", &basic_negative_test);
	load_test(&testlist, "Zero test", &zero_test);
	load_test(&testlist, "Plus/Minus test", &plus_minus_test);
	load_test(&testlist, "Int max test", &int_max_test);
	load_test(&testlist, "Int min test", &int_min_test);
	load_test(&testlist, "Weird test", &weird_test);
	load_test(&testlist, "Long + test", &long_test);
	load_test(&testlist, "Long - test", &long_neg_test);
	return (launch_tests(&testlist));
}
