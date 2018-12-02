/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   broken_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:12:02 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:12:04 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int		broken_atoi(char *str)
{
	int nb;
	int neg;
	int i;

	nb = 0;
	neg = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			str[i] = '+';
			neg = 1;
		}
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
		nb = nb * 10 + str[i++] - 48;
	if (neg == 1)
		return (nb);
	return (-nb);
}
