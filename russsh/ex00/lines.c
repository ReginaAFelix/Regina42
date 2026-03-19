/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:54:31 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/15 14:55:27 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	count_lines(char *file)
{
	int		fd;
	int		count;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			count++;
	}
	close(fd);
	return (count);
}
