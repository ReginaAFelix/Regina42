/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:45:47 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:51:50 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_puterr(char *prog, char *file)
{
	ft_putstr(basename(prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(" - Error: ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}
