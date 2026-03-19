/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:21:36 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:40:41 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int a;
	int b;
	a = 10;
	b = 2;

	printf("O valor de A é: %d\nO valor de B é: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("O resultado da divisão é: %d\nO resultado do resto é: %d\n", a, b);
}
