/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_int_max_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:55:55 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 21:00:24 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		int_max_test(void)
{
	int a;
	int b;

	a = ft_atoii("2147483647");
	b = atoi("2147483647");
	if (a == b)
		return (0);
	else
		return (-1);
}
