/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:35:38 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/16 13:04:33 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}

#include <stdio.h>
int main(void)
{
    int nb;
    int power;

    nb = 8;
    power = 5;
    // coloque dentro do loop while
    // printf("power[%d]: %d\n", power, result);
    printf("%d", ft_iterative_power(nb, power));
    return (0);
}
