/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:37:31 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/13 15:41:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*x;

	x = malloc(sizeof(t_stack));
	if (x == 0)
		exit(1);
	x ->value = value;
	x ->next = NULL;
	return (x);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*x;

	if (!lst)
		return (NULL);
	x = lst;
	while (x-> next)
		x = x-> next;
	return (x);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (last)
		last -> next = new;
	else
		*lst = new;
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
