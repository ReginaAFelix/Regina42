/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:03:57 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/06 16:50:22 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
#include <unistd.h>
int main()
{
	int		i;
	i = 0;
	char frase[]="maya";
	ft_strupcase(frase);
	while(frase[i] != '\0')
	{
		write(1,&frase[i],1);
		i++;
	}
}
