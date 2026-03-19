/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:20:39 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:57:51 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
#include<stdio.h>
int main(void)
{
	char *word = "bom dia, tudo bem?";

	printf("tamanho da string: %d\n", ft_strlen(word));

	return (0);
}
