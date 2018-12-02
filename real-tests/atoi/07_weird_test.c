/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_weird_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 21:02:39 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 21:05:54 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		weird_test(void)
{
	int a;
	int b;

	a = ft_atoii("      \t 256der \t\t\v");
	b = atoi("      \t 256der \t\t\v");
	if (a == b)
		return (0);
	else
		return (-1);
}
