/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:20:15 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/06 17:18:25 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size == 0)
		return (slen);
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}

#include <unistd.h>
#include <stdio.h>
int main(void)
{

	char origin[] = "maria do bairro";
	char destin[] = "pedro";

	unsigned int len;
	unsigned int tamanho;
	int		i;
	i = 0;
	len = 5;
	 tamanho = ft_strlcpy(destin,origin,len);
	write(1,"texto copiado:",15);
	while(destin[i] != '\0')
	{
		write(1,&destin[i],1);
		i++;
	}
write(1,"\nTamanho da string origem: ",26);
	printf("%u",tamanho);
}
