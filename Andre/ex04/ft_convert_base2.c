/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:17:00 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 11:17:00 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	verify_base(char *base)
{
	int	j;
	int	i;

	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	count_digits_for_malloc(int nbr, int base_len)
{
	int			len;
	long int	n;

	len = 0;
	n = nbr;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / base_len;
		len++;
	}
	return (len);
}

char	*prepare_result(int nbr, char *base, int *base_len, int *len)
{
	char	*result;

	*base_len = verify_base(base);
	if (*base_len == 0)
		return (0);
	*len = count_digits_for_malloc(nbr, *base_len);
	result = (char *)malloc(sizeof(char) * (*len + 1));
	if (!result)
		return (0);
	result[*len] = '\0';
	if (nbr == 0)
		result[0] = base[0];
	if (nbr < 0)
		result[0] = '-';
	return (result);
}

void	fill_result(char *result, long int n, char *base, int len)
{
	int	base_len;

	base_len = verify_base(base);
	while (n > 0)
	{
		len--;
		result[len] = base[n % base_len];
		n = n / base_len;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	int			base_len;
	int			len;
	long int	n;
	char		*result;

	result = prepare_result(nbr, base, &base_len, &len);
	if (!result)
		return (0);
	n = nbr;
	if (n < 0)
		n = -n;
	if (n > 0)
		fill_result(result, n, base, len);
	return (result);
}
