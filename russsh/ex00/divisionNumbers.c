/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divisionNumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:45:25 by hvanique          #+#    #+#             */
/*   Updated: 2026/03/15 16:45:59 by hvanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

void	print_space(int *first)
{
	if (!*first)
		write(1, " ", 1);
	*first = 0;
}

void	handle_large(char *str, t_dict *dict, int *first, int n)
{
	int		rem;
	char	prefix[4];

	rem = n % 3;
	if (rem == 0)
		rem = 3;
	ft_strncpy(prefix, str, rem);
	solve(prefix, dict, first);
	print_space(first);
	print_from_dict(get_magnitude(n), dict);
	solve(str + rem, dict, first);
}

void	handle_three(char *str, t_dict *dict, int *first)
{
	char	unit[2];

	if (str[0] != '0')
	{
		unit[0] = str[0];
		unit[1] = '\0';
		solve(unit, dict, first);
		print_space(first);
		print_from_dict("100", dict);
	}
	solve(str + 1, dict, first);
}

void	handle_two(char *str, t_dict *dict, int *first)
{
	char	tens[3];

	if (str[0] == '0')
		solve(str + 1, dict, first);
	else if (str[0] == '1')
	{
		print_space(first);
		print_from_dict(str, dict);
	}
	else
	{
		tens[0] = str[0];
		tens[1] = '0';
		tens[2] = '\0';
		print_space(first);
		print_from_dict(tens, dict);
		solve(str + 1, dict, first);
	}
}

void	solve(char *str, t_dict *dict, int *first)
{
	int	n;

	n = ft_strlen(str);
	if (n == 0)
		return ;
	if (n > 3)
		handle_large(str, dict, first, n);
	else if (n == 3)
		handle_three(str, dict, first);
	else if (n == 2)
		handle_two(str, dict, first);
	else if (n == 1)
	{
		if (str[0] != '0' || *first)
		{
			print_space(first);
			print_from_dict(str, dict);
		}
	}
}
