/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:34:33 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/16 08:34:34 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	main(int argc, char **argv)
{
	ft_display_file(argc, argv);
	return (0);
}

//PARA TESTE: CRIAR UM ARQUIVO TEXTO E EXECUTAR 
//./ft_display_file NOME_DO_ARQUIVO
//EXEMPLO DO QUE COLOCAR NO ARQUIVO:
//O que estou fazendo? 
//1 - recebo um único nome de arquivo
//2- abro esse arquivo
//3- leio o conteúdo
//4- mostro na tela