/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:53:06 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:11:11 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int		main(void)
{
	stringsplit_test_launcher();
	ft_putchar('\n');
	stringcpy_test_launcher();
	ft_putchar('\n');
	atoi_test_launcher();
	ft_putchar('\n');
	broken_atoi_test_launcher();
	return (0);
}
