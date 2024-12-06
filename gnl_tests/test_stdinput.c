/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:09:19 by caburges          #+#    #+#             */
/*   Updated: 2024/12/03 17:19:17 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	char	*line;

	printf("Hello, TELL ME WHAT YOU WANT (Ctrl+D to quit):\n\n");

	while ((line = get_next_line(0)) != NULL)
	{
		printf("\tNah, you aint having %s", line);
		free(line);
		printf("\tWhat do you really really want?\n");
	}

	printf("Bye byeeeeeee, sweet dreams\n");
}
