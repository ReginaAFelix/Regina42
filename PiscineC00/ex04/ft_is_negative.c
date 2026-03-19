/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:14:36 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/05 10:20:17 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	write(1, &c, 1);
}

// int	main(void)
// {
// 	int	n;

// 	n = -3;
// 	ft_is_negative(n);
// }
