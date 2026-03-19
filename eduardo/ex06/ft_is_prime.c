/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:33:12 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/16 13:17:53 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;

	aux = nb - 1;
	if (nb < 2)
		return (0);
	while ((nb % aux) != 0)
		--aux;
	if (aux == 1)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main(void)
{
    int	nb;
	nb = 16;
    printf("%d", ft_is_prime(nb));
    return (0);
}
