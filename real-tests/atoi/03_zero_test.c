/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:52:06 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:52:36 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		zero_test(void)
{
	int a;
	int b;

	a = ft_atoii("0");
	b = atoi("0");
	if (a == b)
		return (0);
	else
		return (-1);
}
