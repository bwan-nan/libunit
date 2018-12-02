/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:25:53 by bwan-nan          #+#    #+#             */
/*   Updated: 2018/12/02 23:15:00 by bwan-nan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>

typedef struct				s_unit_test
{
	char					*test_name;
	int						(*test)(void);
	struct s_unit_test		*next;
}							t_unit_test;

int							basic_launcher(void);
int							basic_test(void);
int							ko_test(void);
int							segfault_test(void);
int							buserror_test(void);
int							launch_tests(t_unit_test **testlist);
void						load_test(t_unit_test **testlist,
							char *test_name, int (*test)(void));
int							basic_test(void);
int							stringsplit_test_launcher(void);
int							basic_test_stringsplit(void);
int							harder_test_stringsplit(void);
int							null_test_stringsplit(void);
char						**ft_stringsplit(char const *s, char c);
int							stringcpy_test_launcher(void);
int							basic_test_strcpy(void);
int							segv_test_strcpy(void);
int							buserror_test(void);
char						*ft_stringcpy(char *dest, const char *src);
int							ft_atoii(const char *nptr);
int							atoi_test_launcher(void);
int							basic_positive_test(void);
int							basic_negative_test(void);
int							zero_test(void);
int							plus_minus_test(void);
int							int_max_test(void);
int							int_min_test(void);
int							weird_test(void);
int							long_test(void);
int							long_neg_test(void);
int							broken_atoi(char *str);
int							broken_atoi_test_launcher(void);
int							broken_atoi_basic_test(void);
int							broken_atoi_buserror_test(void);

#endif
