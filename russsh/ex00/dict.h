/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:40:39 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/15 16:30:15 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct s_dict
{
	char	*number;
	char	*text;
}	t_dict;

int		count_lines(char *file);
char	*read_file(char *file);
t_dict	*load_dict(char *file);

#endif
