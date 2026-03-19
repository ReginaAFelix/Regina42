/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-y <ahideo-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:04:29 by ahideo-y          #+#    #+#             */
/*   Updated: 2026/03/10 13:04:29 by ahideo-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**fill_words(char *str, char *charset, char **tab)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			tab[i] = malloc_word(str, charset);
			if (!tab[i])
				return (0);
			i++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;

	words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (0);
	return (fill_words(str, charset, tab));
}

#include <stdio.h>

void	print_result(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
	{
		printf("Resultado: NULL\n");
		return ;
	}
	while (tab[i])
	{
		printf("Resultado[%d] = \"%s\"\n", i, tab[i]);
		i++;
	}
	printf("Resultado[%d] = NULL\n", i);
}

int	main(void)
{
	char	**tab;

	printf("TESTE 1: string normal\n");
	printf("Entrada str     = \"ola,42,sp\"\n");
	printf("Entrada charset = \",\"\n");
	printf("Esperado[0] = \"ola\"\n");
	printf("Esperado[1] = \"42\"\n");
	printf("Esperado[2] = \"sp\"\n");
	printf("Esperado[3] = NULL\n");
	tab = ft_split("ola,42,sp", ",");
	print_result(tab);
	printf("\n");

	printf("TESTE 2: separadores seguidos\n");
	printf("Entrada str     = \"ola,,42,,,sp\"\n");
	printf("Entrada charset = \",\"\n");
	printf("Esperado[0] = \"ola\"\n");
	printf("Esperado[1] = \"42\"\n");
	printf("Esperado[2] = \"sp\"\n");
	printf("Esperado[3] = NULL\n");
	tab = ft_split("ola,,42,,,sp", ",");
	print_result(tab);
	printf("\n");

	printf("TESTE 3: separadores no inicio e no fim\n");
	printf("Entrada str     = \", ,ola,42,sp,,\"\n");
	printf("Entrada charset = \", \"\n");
	printf("Esperado[0] = \"ola\"\n");
	printf("Esperado[1] = \"42\"\n");
	printf("Esperado[2] = \"sp\"\n");
	printf("Esperado[3] = NULL\n");
	tab = ft_split(", ,ola,42,sp,,", ", ");
	print_result(tab);
	printf("\n");

	printf("TESTE 4: varios separadores diferentes\n");
	printf("Entrada str     = \"abc;def,ghi:jkl\"\n");
	printf("Entrada charset = \";,:\"\n");
	printf("Esperado[0] = \"abc\"\n");
	printf("Esperado[1] = \"def\"\n");
	printf("Esperado[2] = \"ghi\"\n");
	printf("Esperado[3] = \"jkl\"\n");
	printf("Esperado[4] = NULL\n");
	tab = ft_split("abc;def,ghi:jkl", ";,:");
	print_result(tab);
	printf("\n");

	printf("TESTE 5: sem separador na string\n");
	printf("Entrada str     = \"abcdef\"\n");
	printf("Entrada charset = \",\"\n");
	printf("Esperado[0] = \"abcdef\"\n");
	printf("Esperado[1] = NULL\n");
	tab = ft_split("abcdef", ",");
	print_result(tab);
	printf("\n");

	printf("TESTE 6: string vazia\n");
	printf("Entrada str     = \"\"\n");
	printf("Entrada charset = \",\"\n");
	printf("Esperado[0] = NULL\n");
	tab = ft_split("", ",");
	print_result(tab);
	printf("\n");

	printf("TESTE 7: so separadores\n");
	printf("Entrada str     = \",,,,,,\"\n");
	printf("Entrada charset = \",\"\n");
	printf("Esperado[0] = NULL\n");
	tab = ft_split(",,,,,,", ",");
	print_result(tab);
	printf("\n");

	printf("TESTE 8: charset vazio\n");
	printf("Entrada str     = \"abc\"\n");
	printf("Entrada charset = \"\"\n");
	printf("Esperado[0] = \"abc\"\n");
	printf("Esperado[1] = NULL\n");
	tab = ft_split("abc", "");
	print_result(tab);
	printf("\n");

	return (0);
}
