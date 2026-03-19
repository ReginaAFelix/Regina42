/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:00:11 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/15 18:14:49 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "dict.h"

char	*read_dict(char *file)
{
	int		fd;
	int		size;
	char	c;
	char	*buffer;

	size = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (read(fd, &c, 1) > 0)
		size++;
	close(fd);
	buffer = malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	fd = open(file, O_RDONLY);
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}
