/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:32:19 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/16 13:15:01 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb != aux * aux && nb > aux)
		aux++;
	if (nb == aux)
		return (0);
	return (aux);
}

#include <stdio.h>
int main(void)
{
    int nb;
    nb = 4;
    printf("%d", ft_sqrt(nb));
    return (0);
}
