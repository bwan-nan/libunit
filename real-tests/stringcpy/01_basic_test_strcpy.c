/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_strcpy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:36:01 by cchi              #+#    #+#             */
/*   Updated: 2018/12/02 20:18:14 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <string.h>

int	basic_test_strcpy(void)
{
	char s1[6];
	char s2[6];

	if (ft_strcmp(ft_stringcpy(s1, "hello"), strcpy(s2, "hello")) == 0)
		return (0);
	else
		return (-1);
}
