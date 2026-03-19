/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:03:24 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:46:22 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ra;

	ra = 0;
	while (str[ra] != '\0')
	{
		ra++;
	}
	write(1, str, ra);
}

int main(void)
{
	ft_putstr("Dante Dante Dante");
}
