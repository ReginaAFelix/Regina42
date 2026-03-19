/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:09:18 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:49:13 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
#include<stdio.h>
int main(void)
{
	int x = 35;
	int y = 5;

	int *a = &x;
	int *b = &y;

	printf("Valor de 'x': %d dividido por 'y': %d\n", x, y);
	printf("\n");
	ft_ultimate_div_mod(a, b);
	printf("Gera o quociente: %d e o resto: %d\n", x, y);
	printf("Quociente em 'x': %d resto em 'y': %d\n", x, y);
}
