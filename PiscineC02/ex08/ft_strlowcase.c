/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:52:09 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/18 10:12:51 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
//  	int 	i;
//  	i = 0;
//  	char nome[]="LUCK";
//  	ft_strlowcase(nome);
//  	while(nome[i] != '\0')
//  	{
//  		write(1,&nome[i],1);
//  		i++;
//  	}
// }
