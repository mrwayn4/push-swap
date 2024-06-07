/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:41:49 by ibouram           #+#    #+#             */
/*   Updated: 2024/06/07 02:01:43 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_stack
{
	int				value;
	int				index;
	int				position;
	struct s_stack	*next;
}			t_stack;

char	*get_next_line(int fd);
char	*ft_read(int fd, char *rest);
char	*ft_newline(char *rest);
char	*ft_getline(char *rest);
size_t	ft_strlen(char *s);
t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
int		ft_strchr(const char *s1, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strncpy(char *src, char *dst, size_t n);
void	operations(char *line, t_stack **a, t_stack **b);
char	**ft_split(const char *s, char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_error(void);
void	check_dup(t_stack *a);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		check_nbr(char *s);
void	valid_arg(char **av, t_stack **a);
long	ft_atoi(const char *str);
void	add_back(t_stack **a, int x);
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
int		sorted(t_stack *a);
#endif