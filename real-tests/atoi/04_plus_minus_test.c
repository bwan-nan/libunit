/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_plus_minus_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:53:40 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:54:38 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <stdlib.h>

int		plus_minus_test(void)
{
	int a;
	int b;

	a = ft_atoii("+-65");
	b = atoi("+-65");
	if (a == b)
		return (0);
	else
		return (-1);
}
