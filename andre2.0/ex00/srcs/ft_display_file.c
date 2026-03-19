/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:32:03 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:40:40 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

static void	read_file(char *filenamestr)
{
	int		fd;
	char	buffer[1024];
	int		r;

	fd = open(filenamestr, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Não é possível ler o arquivo.\n");
		return ;
	}
	r = read(fd, buffer, 1024);
	while (r > 0)
	{
		write(1, buffer, r);
		r = read(fd, buffer, 1024);
	}
	if (r == -1)
		ft_putstr("Não é possível ler o arquivo.\n");
	close(fd);
}

void	ft_display_file(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr("Muitos argumentos.\n");
	else if (argc < 2)
		ft_putstr("Nome do arquivo faltando.\n");
	else
		read_file(argv[1]);
}
