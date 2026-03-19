/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:45:49 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/12 11:46:50 by rangelim         ###   ########.fr       */
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

// int main(void)
// {
// 	ft_putstr("Regina Angelim Felix");
// }
