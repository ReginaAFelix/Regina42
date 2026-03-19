/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:16:54 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 11:16:54 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		verify_base(char *base);
char	*ft_itoa_base(int nbr, char *base);

int	find_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	get_sign(char *str, int *i)
{
	int	s;

	s = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			s = -s;
		(*i)++;
	}
	return (s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	n_base;
	int	index;
	int	result;

	result = 0;
	n_base = verify_base(base);
	if (n_base == 0)
		return (0);
	i = skip_space(str);
	s = get_sign(str, &i);
	index = find_char(str[i], base);
	while (index != -1)
	{
		result = result * n_base + index;
		i++;
		index = find_char(str[i], base);
	}
	return (s * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (verify_base(base_from) == 0 || verify_base(base_to) == 0)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	if (n <= 2147483647)
		return (ft_itoa_base(n, base_to));
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_convert_base("101010", "01", "0123456789");
	s2 = ft_convert_base("   ---101010", "01", "0123456789abcdef");
	s3 = ft_convert_base("2a", "0123456789abcdef", "01");
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	free(s1);
	free(s2);
	free(s3);
	return (0);
}

//Para o teste acima, espera-se a saida:
//42
//-2a
//101010
//atoi

//convert base (itoa)
//retornar somente um "-"
//nbr <= getconf INT_MAX (geralmente 2147483647)
