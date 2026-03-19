/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:12:09 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 11:12:09 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	nbr = (int *)malloc(sizeof(int) * (len));
	i = 0;
	while (i < (len))
	{
		nbr[i] = min;
		i++;
		min++;
	}
	return (nbr);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	min = 32;
	max = 70;
	arr = ft_range(min, max);
	if (!arr)
		return (1);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
