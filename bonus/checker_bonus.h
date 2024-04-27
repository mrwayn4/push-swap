/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:41:49 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 18:42:18 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *rest);
char	*ft_newline(char *rest);
char	*ft_getline(char *rest);
size_t	ft_strlen(char *s);
int		ft_strchr(const char *s1, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strncpy(char *src, char *dst, size_t n);
#endif