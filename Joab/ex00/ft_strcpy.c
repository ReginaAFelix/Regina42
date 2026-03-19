/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:38:45 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/06 16:20:36 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
#include <unistd.h>
int main (void)
{
	char origem [] = "Olá, enfermeira!";
	char destino[17];
	int i;
	i = 0;

	ft_strcpy(destino,origem);
	while(destino[i]!= '\0')
	{
		write(1,&destino[i],1);
		i++;
	}
}
