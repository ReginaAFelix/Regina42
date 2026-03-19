/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:48:39 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 10:48:39 by ahideo-y         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		strlen;
	int		i;

	strlen = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (strlen + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	*original;
	char	*copia;

	original = "bom dia pessoal";
	copia = ft_strdup(original);

	printf("original: %s\n", original);
	printf("copia: %s\n", copia);

	free(copia);
	return (0);
}
