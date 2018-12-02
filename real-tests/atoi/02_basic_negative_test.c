/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_negative_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:50:40 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:51:23 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		basic_negative_test(void)
{
	int a;
	int b;

	a = ft_atoii("-12");
	b = atoi("-12");
	if (a == b)
		return (0);
	else
		return (-1);
}
