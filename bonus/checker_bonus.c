/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:43:12 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/28 09:42:42 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	sorted(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	operations(char *line, t_stack **a, t_stack **b)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(*a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(*b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(*a, *b);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(*a, *b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(*b, *a);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(*a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(*b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(*a, *b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(*a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(*b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(*a, *b);
	else
		ft_error();
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	a = NULL;
	b = NULL;
	line = NULL;
	if (ac > 1)
	{
		valid_arg(av, &a);
		while (line)
		{
			line = get_next_line(0);
			if (line)
				operations(line, &a, &b);
			free(line);
		}
		if (sorted(a) == 0 && !b)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		exit(0);
	}
	else
		return (0);
}