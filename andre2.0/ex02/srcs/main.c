/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:54:19 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 09:09:48 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	is_valid_number(char *str)
{
	int	i;

	if (!str[0])
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putstr_fd("Use por favor: ./ft_tail -c number file\n", 2);
		return (0);
	}
	if (argv[1][0] != '-' || argv[1][1] != 'c' || argv[1][2] != '\0')
	{
		ft_putstr_fd("Use por favor: ./ft_tail -c number file\n", 2);
		return (0);
	}
	if (!is_valid_number(argv[2]))
	{
		ft_putstr_fd("Numero invalido\n", 2);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		n;
	int		size;
	char	*content;

	if (!check_args(argc, argv))
		return (1);
	n = ft_atoi(argv[2]);
	content = read_file(argv[3], &size);
	if (!content && size == 0)
	{
		print_error(argv[0], argv[3]);
		return (1);
	}
	print_tail_bytes(content, size, n);
	free(content);
	return (0);
}
