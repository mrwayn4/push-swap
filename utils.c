/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:13:54 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 18:32:04 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

void	add_back(t_stack **a, int x)
{
	t_stack	*tmp;

	tmp = ft_lstnew(x);
	ft_lstadd_back(a, tmp);
}

int	max_pos(t_stack *a)
{
	int		i;
	t_stack	*tmp;
	t_stack	*max;

	i = 0;
	tmp = a;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
	tmp = a;
	max = a;
	while (tmp)
	{
		if (tmp->value > max->value)
			max = tmp;
		tmp = tmp->next;
	}
	return (max->index);
}

int	min_pos(t_stack *a)
{
	int		i;
	t_stack	*tmp;
	t_stack	*min;

	i = 0;
	tmp = a;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
	tmp = a;
	min = a;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min->index);
}
