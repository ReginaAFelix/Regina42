/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:12:26 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:37:17 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int div;
	int mod;
	int a;
	int b;
	a = 10;
	b = 2;

	printf("O valor de A é: %d\nO valor de B é: %d\n", a, b);
	ft_div_mod(10, 2, &div, &mod);
	printf("O valor da divisão é: %d\nO valor do resto é: %d\n", div, mod);
}
