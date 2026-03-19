/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:15:44 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 11:15:44 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]); // total = total + ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

void	ft_append(char *dest, char *src, int *x)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*x] = src[i];
		(*x)++;
		i++;
	}
}

char	*ft_empty_str(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 1);
	if (!str)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*j_str;
	int		i;
	int		x;

	if (size == 0)
		return (ft_empty_str());
	j_str = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!j_str)
		return (0);
	i = 0;
	x = 0;
	while (i < size)
	{
		ft_append(j_str, strs[i], &x);
		if (i < size - 1)
			ft_append(j_str, sep, &x);
		i++;
	}
	j_str[x] = '\0';
	return (j_str);
}

#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*res;

	strs[0] = "ola";
	strs[1] = "mundo";
	strs[2] = "42";
	res = ft_strjoin(3, strs, " = ");
	printf("%s\n", res);
	free(res);
	return(0);
}
