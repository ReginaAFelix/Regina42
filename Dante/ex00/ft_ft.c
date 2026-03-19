/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 09:33:11 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:29:46 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int num;
	int *nbr;
	num = 10;
	nbr = &num;
	printf("%d\n", num);
	ft_ft(nbr);
	printf("%d\n", num);
}
