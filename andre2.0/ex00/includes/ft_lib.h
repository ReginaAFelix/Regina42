/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:31:37 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:31:38 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <fcntl.h>

void	ft_display_file(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif