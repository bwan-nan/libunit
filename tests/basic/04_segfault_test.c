/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:19:32 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 23:21:16 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <string.h>

int		segfault_test(void)
{
	if (ft_strcpy("Hello", NULL))
		return (0);
	else
		return (-1);
}
