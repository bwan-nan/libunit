/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_segv_test_strcpy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:40:09 by bwan-nan          #+#    #+#             */
/*   Updated: 2019/01/11 13:40:11 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <string.h>

int	segv_test_strcpy(void)
{
	if (ft_strcmp(ft_stringcpy("hello", NULL), strcpy("hello", NULL)) == 0)
		return (0);
	else
		return (-1);
}
