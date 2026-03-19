/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:23:30 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:59:37 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
#include<stdio.h>
int main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	int i;
	int j;

	size = 0;
	i = 0;
	j = 0;

	printf("Antes da execucao da funcao: \n");
	printf("Primeiro elemento tab[0]: %d\n", tab[0]);
	printf("Terceiro elemento tab[2]: %d\n", tab[2]);
	printf("Ultimo elemento tab[9]: %d\n", tab[9]);
	printf("\n");
	ft_rev_int_tab(tab, 10);
	printf("Depois da execucao funcao:\n");
	printf("Primeiro elemento tab[0]: %d\n", tab[0]);
	printf("Terceiro elemento tab[2]: %d\n", tab[2]);
	printf("Ultimo elemento tab[9]: %d\n", tab[9]);
}
