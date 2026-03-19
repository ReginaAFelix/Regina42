/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:14:13 by dhercula          #+#    #+#             */
/*   Updated: 2026/03/10 11:50:55 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
#include<stdio.h>
int main(void)
{
	char *test = "Teste de Impressao1";
	ft_putstr(test);
	printf("\n");
	char *test2 = "Bom dia, oi!";
	ft_putstr(test2);

}
