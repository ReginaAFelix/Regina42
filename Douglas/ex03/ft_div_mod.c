/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:59:38 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:44:26 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
#include<stdio.h>
int main(void)
{
	int a = 48;
	int b = 5;
	int quo = 0;
	int rmd = 0;
	int *quocient = &quo;
	int *remainder = &rmd;

	printf("Antes da execucao da funcao:\n");
	printf("'a': %d; 'b': %d\n", a, b);
	printf("Quociente: %d; Resto: %d\n", *quocient, *remainder);
	printf("\n");
	ft_div_mod(a, b, quocient, remainder);
	printf("Apos a execucao da funcao:\n");
	printf("'a': %d; 'b': %d\n", a, b);
	printf("Quociente: %d; Resto: %d\n", *quocient, *remainder);

	return (0);
}
