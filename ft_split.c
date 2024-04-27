/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:12:48 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 12:04:56 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**free_memory(char **result, int sub)
{
	while (sub > 0)
	{
		sub--;
		free(result[sub]);
	}
	free(result);
	return (0);
}

static int	count_subs(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*copy_sub(char *dst, const char *src, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
		dst[i++] = src[start++];
	dst[i] = '\0';
	return (dst);
}

static char	**sub_process(const char *s, char c, char **res, int n)
{
	const char	*word_start;
	const char	*word_end;
	int			word;
	int			length;

	word = 0;
	while (word < n)
	{
		while (*s && *s == c)
			s++;
		word_start = s;
		while (*s && *s != c)
			s++;
		word_end = s;
		length = word_end - word_start;
		res[word] = (char *)malloc(length + 1);
		if (!res[word])
			return (free_memory(res, word));
		copy_sub(res[word], word_start, 0, length);
		word++;
	}
	res[word] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char			**res;
	unsigned int	num;

	if (!s)
		return (NULL);
	num = count_subs(s, c);
	res = (char **)malloc((num + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = sub_process(s, c, res, num);
	return (res);
}
