/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 06:40:15 by carocha-          #+#    #+#             */
/*   Updated: 2026/03/13 17:14:46 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	ft_create_string(int n);
void	ft_putstr(char *str);
int		ft_break_loop(char *inicio, char *fim, int n);
void	ft_increment_string(char *src, int n);

void	ft_print_combn(int n)
{
	ft_create_string(n);
}

void	ft_create_string(int n)
{
	char	string_inicial[11];
	char	string_final[11];
	int		i;
	int		j;

	i = 0;
	j = 10 - n;
	while (i < n)
	{
		string_inicial[i] = '0' + i;
		string_final[i] = '0' + j;
		i++;
		j++;
	}
	string_inicial[i] = '\0';
	string_final[i] = '\0';
	while (1)
	{
		ft_putstr(string_inicial);
		if (string_inicial[0] != '9' - n + 1)
			write(1, ", ", 2);
		if (ft_break_loop(string_inicial, string_final, n))
			break ;
		ft_increment_string(string_inicial, n);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_break_loop(char *inicio, char *fim, int n)
{
	if (inicio[0] == fim[0] && \
			inicio[n - 1] == fim[n - 1])
		return (1);
	return (0);
}

void	ft_increment_string(char *src, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0)
	{
		if (src[i] < '9' - (n - 1 - i))
		{
			src[i]++;
			j = i + 1;
			while (j < n)
			{
				src[j] = src[j - 1] + 1;
				j++;
			}
			break ;
		}
		i--;
	}
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
