/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:17:02 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 14:17:08 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test		*ft_lstcreate(char *test_name, int (*test)(void))
{
	t_unit_test		*new_list;

	if (!(new_list = (t_unit_test *)malloc(sizeof(t_unit_test))))
		return (NULL);
	new_list->test_name = test_name;
	new_list->test = test;
	new_list->next = NULL;
	return (new_list);
}

void					load_test(t_unit_test **testlist,
		char *test_name, int (*test)(void))
{
	t_unit_test *tmp;

	if (*testlist == NULL)
		*testlist = ft_lstcreate(test_name, test);
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lstcreate(test_name, test);
	}
}
