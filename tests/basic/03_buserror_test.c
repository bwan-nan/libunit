/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:21:11 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 23:21:12 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include <string.h>

int		buserror_test(void)
{
	if (ft_strcpy("salut", "bonjour"))
		return (0);
	else
		return (-1);
}
