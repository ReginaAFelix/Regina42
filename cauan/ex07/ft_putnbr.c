/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 06:14:53 by carocha-          #+#    #+#             */
/*   Updated: 2026/03/13 17:05:40 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nbr);

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
		ft_putnbr(nbr);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		write(1, &"0123456789"[nbr % 10], 1);
	}
}

int	main(void)
{
	ft_putnbr(65);
	return (0);
}
