/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:46:05 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/18 10:11:46 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	char *name = "123456";
// 	if(ft_str_is_numeric(name))
// 	{
// 		write(1,"1",1);

// 	}
// 	else
// 	write(1,"0",1);
// }
