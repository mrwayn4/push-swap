/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:44:13 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/07 00:48:54 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				position;
	struct s_stack	*next;
}	t_stack;

char	**ft_split(const char *s, char c);
void	ft_error(void);
void	ft_free(char **s);
void	valid_arg(char **av, t_stack **a);
long	ft_atoi(const char *str);
int		check_nbr(char *s);
void	check_dup(t_stack *a);
void	add_back(t_stack **a, int x);
t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack *a, t_stack *b);
int		max_pos(t_stack *a);
int		min_pos(t_stack *a);
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	sort_four_five(t_stack **a, t_stack **b);
void	push_to_b(t_stack **a, t_stack **b, int i, int x);
void	push_to_a(t_stack **a, t_stack **b, int i, int x);
void	indexing(t_stack *a);
void	sort(t_stack **a, t_stack **b);
int		sorted(t_stack *a);

#endif