/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:33:48 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:05:45 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int		basic_test_stringsplit(void)
{
	int		i;
	char	**tab1;
	char	**tab2;

	i = 0;
	tab1 = ft_stringsplit("Bonjour tout le monde", ' ');
	tab2 = ft_strsplit("Bonjour tout le monde", ' ');
	while (tab1[i])
	{
		if (ft_strcmp(tab1[i], tab2[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}
