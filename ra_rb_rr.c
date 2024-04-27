/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:28:17 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 12:10:11 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*last;

	if (*a && (*a)->next)
	{
		last = ft_lstlast(*a);
		last->next = *a;
		*a = (*a)->next;
		last->next->next = NULL;
		write (1, "ra\n", 3);
	}
}

void	rb(t_stack **b)
{
	t_stack	*last;

	if (*b && (*b)->next)
	{
		last = ft_lstlast(*b);
		last->next = *b;
		*b = (*b)->next;
		last->next->next = NULL;
		write (1, "rb\n", 3);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	ra(&a);
	rb(&b);
	write (1, "rr\n", 3);
}
