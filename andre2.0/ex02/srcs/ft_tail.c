/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:54:10 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 09:09:11 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

char	*append_buffer(char *old_buf, int old_size, char *tmp, int bytes_read)
{
	char	*new_buf;
	int		i;

	new_buf = malloc(old_size + bytes_read);
	if (!new_buf)
		return (NULL);
	i = 0;
	while (i < old_size)
	{
		new_buf[i] = old_buf[i];
		i++;
	}
	i = 0;
	while (i < bytes_read)
	{
		new_buf[old_size + i] = tmp[i];
		i++;
	}
	free(old_buf);
	return (new_buf);
}

//Part of read_file (broken into 3  smaller functions for norminette)
static int	read_loop(int fd, char **content, int *size)
{
	int		bytes_read;
	char	tmp[1024];

	bytes_read = read(fd, tmp, 1024);
	while (bytes_read > 0)
	{
		*content = append_buffer(*content, *size, tmp, bytes_read);
		if (!*content)
			return (-1);
		*size += bytes_read;
		bytes_read = read(fd, tmp, 1024);
	}
	return (bytes_read);
}

char	*read_file(char *file_name, int *size)
{
	int		fd;
	int		result;
	char	*content;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	*size = 0;
	content = NULL;
	result = read_loop(fd, &content, size);
	close(fd);
	if (result == -1)
	{
		free(content);
		return (NULL);
	}
	return (content);
}

void	print_tail_bytes(char *content, int size, int n)
{
	int	start;

	if (n >= size)
		start = 0;
	else
		start = size - n;
	write(1, content + start, size - start);
}
