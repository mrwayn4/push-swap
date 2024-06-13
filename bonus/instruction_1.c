/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:35:58 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/13 15:46:18 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*tmp;
	int		size;

	size = ft_lstsize(*a);
	if (size < 2)
		return ;
	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*tmp;
	int		size;

	size = ft_lstsize(*b);
	if (size < 2)
		return ;
	tmp = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}

void	sa(t_stack *a)
{
	int	tmp;
	int	size;

	size = ft_lstsize(a);
	if (size < 2)
		return ;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
}

void	sb(t_stack *b)
{
	int	tmp;
	int	size;

	size = ft_lstsize(b);
	if (size < 2)
		return ;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
}
