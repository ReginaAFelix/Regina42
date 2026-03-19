/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:13:57 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 11:13:57 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (len);
}

#include <stdio.h>
int main(void)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, 3,7);
	printf("size = %d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return(0);
}
