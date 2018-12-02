/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_positive_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:50:32 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:09:42 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		basic_positive_test(void)
{
	int a;
	int b;

	a = ft_atoii("95");
	b = atoi("95");
	if (a == b)
		return (0);
	else
		return (-1);
}
