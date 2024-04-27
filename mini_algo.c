/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:31:41 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 17:15:56 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	sa(&a);
}

void	sort_three(t_stack *a)
{
	int	max;
	int	min;

	max = max_pos(a);
	min = min_pos(a);
	if (max == 0 && min == 1)
		ra(&a);
	else if (max == 0 && min == 2)
	{
		sa(&a);
		rra(&a);
	}
	else if (max == 1 && min == 2)
		rra(&a);
	else if (max == 1 && min == 0)
	{
		rra(&a);
		sa(&a);
	}
	else if (max == 2 && min == 1)
		sa(&a);
}

void	sort_four_five(t_stack **a, t_stack **b)
{
	int	i;
	int	x;

	i = 0;
	while (i < 2)
	{
		x = min_pos(*a);
		if ((*a)->position == x)
		{
			pb(a, b);
			i++;
		}
		else
		{
			if (x > ft_lstsize(*a) / 2)
				rra(a);
			else
				ra(a);
		}
	}
	sort_three(*a);
	pa(a, b);
	pa(a, b);
}

void	sort(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) == 1)
		exit(0);
	if (ft_lstsize(*a) == 2)
		sort_two(*a);
	else if (ft_lstsize(*a) == 3)
		sort_three(*a);
	else if (ft_lstsize(*a) == 4 || ft_lstsize(*a) == 5)
		sort_four_five(a, b);
	else
	{
		indexing(*a);
		push_to_b(a, b, 0, 0);
		push_to_a(a, b, 0, 0);
	}
}
