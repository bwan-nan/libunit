/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_harder_test_stringsplit.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:31:27 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 20:31:32 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int		harder_test_stringsplit(void)
{
	int		i;
	char	**tab1;
	char	**tab2;

	i = 0;
	tab1 = ft_stringsplit("Passe!le!!sel", '!');
	tab2 = ft_strsplit("Passe!le!!sel", '!');
	while (tab1[i])
	{
		if (ft_strcmp(tab1[i], tab2[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}
