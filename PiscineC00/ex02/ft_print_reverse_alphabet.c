/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rangelim <rangelim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:07:01 by rangelim          #+#    #+#             */
/*   Updated: 2026/03/06 15:10:40 by rangelim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabetlittlereverse;

	alphabetlittlereverse = 'z';
	while (alphabetlittlereverse >= 'a')
	{
		write(1, &alphabetlittlereverse, 1);
		alphabetlittlereverse--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
