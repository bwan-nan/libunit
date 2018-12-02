/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_broken_atoi_basic_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:32:04 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:43:36 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		broken_atoi_basic_test(void)
{
	int a;
	int b;

	a = broken_atoi("   895");
	b = atoi("   895");
	if (a == b)
		return (0);
	else
		return (-1);
}
