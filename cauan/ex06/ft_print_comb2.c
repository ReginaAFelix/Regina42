/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 04:27:18 by carocha-          #+#    #+#             */
/*   Updated: 2026/03/13 17:01:17 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			write(1, &(char){n1 / 10 + '0'}, 1);
			write(1, &(char){n1 % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){n2 / 10 + '0'}, 1);
			write(1, &(char){n2 % 10 + '0'}, 1);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
