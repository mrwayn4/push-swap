/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:26:44 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 12:04:32 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write (1, "sa\n", 3);
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
	write (1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(&a);
	sb(&b);
	write (1, "ss\n", 3);
}
