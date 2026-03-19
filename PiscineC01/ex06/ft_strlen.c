/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:53:38 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/12 11:01:07 by rangelim         ###   ########.fr       */
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

// int main(void)
// {
// 	int cont;

// 	cont = ft_strlen("BUENAS");
// 	printf("%d", cont);
// }
