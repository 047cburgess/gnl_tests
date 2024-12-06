/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:09:19 by caburges          #+#    #+#             */
/*   Updated: 2024/12/04 14:14:28 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*line;

	if (ac != 3)
	{
		printf("You didn't add the files -> 2 pls...\n");
		return (1);
	}

	int fd1 = open(av[1], O_RDONLY);
	int fd2 = open(av[2], O_RDONLY);

	line = get_next_line(fd1);
	printf("[LINE 1 | %s ]: %s", av[1], line);
	free(line);

	line = get_next_line(fd2);
	printf("[LINE 1 | %s ]: %s", av[2], line);
	free(line);
	
	line = get_next_line(fd1);
	printf("[LINE 2 | %s ]: %s", av[1], line);
	free(line);
	
	line = get_next_line(fd2);
	printf("[LINE_2 | %s ]: %s", av[2], line);
	free(line);

	printf("Closing '%s'...\n", av[1]);
	while ((line = get_next_line(fd1)) != NULL)
	{
		//printf("%s", line);
		free(line);
	}
	close(fd1);
	printf("\tDone!\n\n");

	printf("Closing '%s'...\n", av[2]);
	while ((line = get_next_line(fd2)) != NULL)
	{
		//printf("%s", line);
		free(line);
	}
	close(fd2);
	printf("\tDone!\n\n");
}
