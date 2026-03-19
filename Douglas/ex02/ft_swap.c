/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:40:26 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:43:46 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int vlr1 = -5;
	int vlr2 = -9;
	int *ptr1 = &vlr1;
	int *ptr2 = &vlr2;

	printf("Valor inicial das variaveis 'vlr1': %d e 'vlr2': %d\n", vlr1, vlr2);
	printf("\n");
	printf("Apos a chamada da funcao: \n");
	ft_swap(ptr1, ptr2);
	printf("Valor final das variaveis 'vlr1': %d e 'vlr2': %d", vlr1, vlr2);

	return (0);
}
