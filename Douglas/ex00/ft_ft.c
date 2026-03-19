/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:11:10 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:20:38 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int n;
	int *ptr = &n;

	n = 20;
	printf("'n' antes da execucao: %d\n", n);
	printf("\n");
	ft_ft(ptr);
	printf("'n' depois de executar a funcao: %d\n", n);
}
