/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:36:51 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/13 15:46:26 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}

void	ra(t_stack **a)
{
	t_stack	*last;

	if (*a && (*a)->next)
	{
		ft_lstlast(*a)->next = *a;
		last = (*a)->next;
		(*a)->next = NULL;
		*a = last;
	}
}

void	rb(t_stack **b)
{
	t_stack	*last;

	if (*b && (*b)->next)
	{
		ft_lstlast(*b)->next = *b;
		last = (*b)->next;
		(*b)->next = NULL;
		*b = last;
	}
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}
