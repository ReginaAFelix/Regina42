/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:53:36 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:53:37 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr_fd(char *str, int fd);
void	print_error(char *prog_name, char *file_name);
char	*read_file(char *file_name, int *size);
void	print_tail_bytes(char *content, int size, int n);

#endif