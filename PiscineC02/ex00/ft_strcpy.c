/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:42:45 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/18 10:11:07 by rangelim         ###   ########.fr       */
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
// #include <unistd.h>
// int main (void)
// {
// 	char origem [] = "bom dia, como vai?";
// 	char destino[17];
// 	int i;
// 	i = 0;

// 	ft_strcpy(destino,origem);
// 	while(destino[i]!= '\0')
// 	{
// 		write(1,&destino[i],1);
// 		i++;
// 	}
// }
