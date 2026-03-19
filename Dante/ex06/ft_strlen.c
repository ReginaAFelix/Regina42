/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:50:11 by dbarros-          #+#    #+#             */
/*   Updated: 2026/03/05 17:49:48 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
		cont++;
	return (cont);
}

int main(void)
{
	int cont;

	cont = ft_strlen("OI");
	printf("%d", cont);
}
