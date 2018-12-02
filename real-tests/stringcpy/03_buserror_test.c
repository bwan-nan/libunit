/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 21:25:06 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:03:45 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <string.h>

int	buserror_test(void)
{
	if (ft_strcmp(ft_stringcpy("hello", "BUS"), strcpy("hello", "BUS")) == 0)
		return (0);
	else
		return (-1);
}
