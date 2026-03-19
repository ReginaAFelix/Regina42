/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:45:50 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:51:52 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc == 1)
		ft_cat(0);
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				ft_puterr(argv[0], argv[i]);
			else
			{
				ft_cat(fd);
				close(fd);
			}
			i++;
		}
	}
	return (0);
}
