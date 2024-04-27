/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:43:12 by ibouram           #+#    #+#             */
/*   Updated: 2024/04/27 18:44:35 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	char	*line;

	line = NULL;
	line = get_next_line(0);
	while (line)
	{
		printf("%s\n", line);
		free(line);
		line = get_next_line(0);
	}
	return (0);
}