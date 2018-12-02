/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 22:12:18 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 22:12:30 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../../framework/libunit.h"
#include "../../framework/libft/libft.h"

static int		ft_count_words(char const *str, char c)
{
	int i;
	int num_words;
	int len;

	i = 0;
	num_words = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == c)
			len = 0;
		else if (++len == 1)
			num_words++;
		i++;
	}
	return (num_words);
}

char			**ft_stringsplit(char const *s, char c)
{
	int		i;
	int		len;
	int		word_index;
	char	**tab;

	i = 0;
	word_index = 0;
	if (!s || !(tab = (char **)
				malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		len = 0;
		while (s[i + len] != c && s[i + len])
			len++;
		if (len)
		{
			tab[word_index] = ft_strsub(s, i, len);
			word_index++;
			i += len - 1;
		}
		i++;
	}
	tab[word_index] = 0;
	return (tab);
}
