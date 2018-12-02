/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_test_stringsplit.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:32:34 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:34:51 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int		null_test_stringsplit(void)
{
	int		i;
	char	**tab1;
	char	**tab2;

	i = 0;
	tab1 = ft_stringsplit(NULL, 'c');
	tab2 = ft_strsplit(NULL, 'c');
	while (tab1[i])
	{
		if (ft_strcmp(tab1[i], tab2[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}
