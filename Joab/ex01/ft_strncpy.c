/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:23:27 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/17 11:10:25 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <unistd.h>

int main (void)
{
	int		i;
	i = 0;
	char	origem [] = "Olá, meu povo";
	char	destino[] = "12345";
	ft_strncpy(destino, origem, 4);
	while(destino[i]!= '\0')
	{
		write(1,&destino[i],1);
		i++;
	}
}
