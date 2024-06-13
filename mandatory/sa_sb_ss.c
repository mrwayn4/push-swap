/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:26:44 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/13 15:52:46 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write (1, "sa\n", 3);
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
	write (1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write (1, "ss\n", 3);
}
