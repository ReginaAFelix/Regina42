/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:26:36 by jwillian          #+#    #+#             */
/*   Updated: 2026/03/05 12:13:41 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	num1;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -(nb);
		ft_putnbr(nb);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		num1 = (nb % 10) + '0';
		write(1, &num1, 1);
	}
}

int	main(void)
{
	ft_putnbr(20154);
	return (0);
}
