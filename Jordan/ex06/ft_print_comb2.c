/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:04:14 by jwillian          #+#    #+#             */
/*   Updated: 2026/03/05 11:58:15 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			write(1, &(char){a / 10 + 48}, 1);
			write(1, &(char){a % 10 + 48}, 1);
			write(1, " ", 1);
			write(1, &(char){b / 10 + 48}, 1);
			write(1, &(char){b % 10 + 48}, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a ++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
