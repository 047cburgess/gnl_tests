/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:09:19 by caburges          #+#    #+#             */
/*   Updated: 2024/12/04 17:08:50 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*line;

	if (ac != 2)
	{
		printf("You didn't add the file...\n");
		return (1);
	}

	int fd = open(av[1], O_RDONLY);
	
	int i = 0;

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("[LINE %i]: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
}
