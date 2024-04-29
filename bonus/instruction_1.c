/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:35:58 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/29 22:26:01 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_stack **a)
{
	int		size;
	t_stack	*tmp;

	size = ft_lstsize(*a);
	if (size < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

void	sb(t_stack **b)
{
	int		size;
	t_stack	*tmp;

	size = ft_lstsize(*b);
	if (size < 2)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(&a);
	sb(&b);
}
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	if (*b != NULL)
	{
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
	}
	return ;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	if (*a != NULL)
	{
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
	return ;
}
