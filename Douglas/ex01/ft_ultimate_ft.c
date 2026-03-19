/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:34:14 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:40:35 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int number;
	int *ptr1 = &number;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	number = 20;
	printf("Numero antes da funcao:\n%d", number);
	ft_ultimate_ft(ptr9);
	printf("\n");
	printf("Numero apos a funcao: \n");
	printf("%d\n", number);
}
