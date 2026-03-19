/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:14:53 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/04 16:59:27 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	alphabetlittle;

	alphabetlittle = 'a';
	while (alphabetlittle >= 'a' && alphabetlittle <= 'z')
	{
		write(1, &alphabetlittle, 1);
		alphabetlittle++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
