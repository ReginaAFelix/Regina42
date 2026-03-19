/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thalda-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:14:53 by thalda-s          #+#    #+#             */
/*   Updated: 2026/03/15 17:05:57 by thalda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

int	ft_is_numeric(char *str)
{
	int i;

	i =0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	if (argc != 2 && argc !=3)
	{
		write(1, "Error\n", 6);
		return 0;
	}
	if (ft_is_numeric(argv[argc - 1]) ==0)
	{
		write(1, "Error\n", 6);
		return 0;
	}
	return 0;
}

