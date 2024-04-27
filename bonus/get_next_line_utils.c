/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:59 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 18:42:52 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(const char *s1, char c)
{
	int	i;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*line;
	int		i;
	int		j;

	j = 0;
	i = -1;
	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = (char *)malloc (1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = 0;
	}
	line = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!line)
		return (free(s1), s1 = NULL, NULL);
	while (s1[++i])
		line[i] = s1[i];
	while (s2[j])
		line[i++] = s2[j++];
	line[i] = '\0';
	free(s1);
	return (line);
}

char	*ft_strncpy(char *src, char *dst, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
