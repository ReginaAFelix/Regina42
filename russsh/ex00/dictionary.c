/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:48:31 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/15 18:22:19 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>

int	parse_line(char *line, t_dict *entry)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	entry->number = malloc(50);
	entry->text = malloc(100);
	while (line[i] >= '0' && line[i] <= '9')
		entry->number[j++] = line[i++];
	entry->number[j] = '\0';
	while (line[i] && line[i] != ':')
		i++;
	i++;
	while (line[i] == ' ')
		i++;
	j = 0;
	while (line[i] && line[i] != '\n')
		entry->text[j++] = line[i++];
	entry->text[j] = '\0';
	return (1);
}

t_dict	*load_dict(char *file)
{
	char	*content;
	t_dict	dict;
	int		lines;
	int		i;
	int		j;

	lines = count_lines(file);
	content = read_file(file);
	dict = malloc(sizeof(t_dict) * lines);
	i = 0;
	j = 0;
	while (content[i])
	{
		parse_line(&content[i], &dict[j]);
		while (content[i] && content[i] != '\n')
			i++;
		if (content[i] == '\n')
			i++;
		j++;
	}
	free(content);
	return (dict);
}
