/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:37:11 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/29 22:33:15 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_stack *a)
{
	int		i;
	t_stack	*tmp;
	t_stack	*min;

	i = 0;
	tmp = a;
	min = a;
	while (min)
	{
		while (tmp)
		{
			if (min->value > tmp->value)
				i++;
			tmp = tmp->next;
		}
		tmp = a;
		min->index = i;
		i = 0;
		min = min->next;
	}
}

void	push_to_b(t_stack **a, t_stack **b, int i, int x)
{
	t_stack	*tmp;

	if (ft_lstsize(*a) <= 100)
		x = 16;
	else
		x = 34;
	while (*a)
	{
		tmp = *a;
		if (tmp->index <= i)
		{
			pb(a, b);
			i++;
		}
		else if (tmp->index < i + x)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
}

void	push_to_a(t_stack **a, t_stack **b, int tmp, int i)
{
	tmp = ft_lstsize(*b);
	while (tmp)
	{
		i = max_pos(*b);
		if ((tmp / 2) >= i)
		{
			while (i)
			{
				rb(b);
				i--;
			}
			pa(a, b);
		}
		else
		{
			while (i != (tmp - 1))
			{
				rrb(b);
				i ++;
			}
			rrb(b);
			pa(a, b);
		}
		tmp--;
	}
}
