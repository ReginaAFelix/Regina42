/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:35:54 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/18 10:11:35 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <unistd.h>
// int main(void)
// {
// 	char *name = "regina_";
// 	if(ft_str_is_alpha(name))
// 	{
// 		write(1,"1",1);
// 	}
// 	else
// 	write(1,"0",1);
// }
