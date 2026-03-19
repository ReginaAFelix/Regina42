/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:45:43 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:51:48 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_cat(int fd)
{
	char	buffer[29000];
	int		r;

	r = read(fd, buffer, 29000);
	while (r > 0)
	{
		write(1, buffer, r);
		r = read(fd, buffer, 29000);
	}
}
