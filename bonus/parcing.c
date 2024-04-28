/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:26:29 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/28 09:52:57 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_dup(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				ft_error();
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

int	check_nbr(char *s)
{
	int	i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && s[i + 1] == '\0')
		ft_error();
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		ft_error();
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			ft_error();
		i++;
	}
	return (0);
}

void	valid_arg(char **av, t_stack **a)
{
	char	**s;
	int		i;
	int		j;
	long	x;

	i = 1;
	j = 0;
	while (av[i])
	{
		s = ft_split(av[i], ' ');
		if (!s || !s[0])
			ft_error();
		while (s[j])
		{
			x = ft_atoi(s[j]);
			if (check_nbr(s[j]) || x < -2147483648 || x > 2147483647)
				ft_error();
			add_back(a, x);
			j++;
		}
		j = 0;
		i++;
	}
	check_dup(*a);
}
