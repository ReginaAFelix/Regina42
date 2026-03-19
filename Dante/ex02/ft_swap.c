/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:10:45 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:34:43 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x;
	int y;
	x = 2;
	y = 4;
	printf("Valor de x é: %d\nValor de y é: %d\n", x, y);
	ft_swap(&x, &y);
	printf("Valor novo de x é: %d\nValor novo de y é: %d", x, y);
}
