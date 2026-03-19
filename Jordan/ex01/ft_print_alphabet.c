/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:11:16 by jwillian          #+#    #+#             */
/*   Updated: 2026/03/05 11:46:57 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra < 123)
	{
		write(1, &letra, 1);
		letra++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
