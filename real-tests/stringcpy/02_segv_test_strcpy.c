/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test_strcpy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:58:52 by cchi              #+#    #+#             */
/*   Updated: 2018/12/02 20:19:20 by bwan-nan         ###   ########.fr       */
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
