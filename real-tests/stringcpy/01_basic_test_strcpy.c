/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_strcpy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:39:53 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/11 13:39:54 by bwan-nan         ###   ########.fr       */
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
