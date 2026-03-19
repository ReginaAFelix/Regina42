/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:14:23 by jwillian          #+#    #+#             */
/*   Updated: 2026/03/05 11:47:42 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra > 96)
	{
		write(1, &letra, 1);
		letra--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
