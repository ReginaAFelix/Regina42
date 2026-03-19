/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:28:25 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/12 18:26:37 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int div;
// 	int mod;
// 	int a;
// 	int b;
// 	a = 55;
// 	b = 8;

// 	printf("O valor de A é: %d\nO valor de B é: %d\n", a, b);
// 	ft_div_mod(10, 2, &div, &mod);
// 	printf("O valor da divisão é: %d\nO valor do resto é: %d\n", div, mod);
// }
