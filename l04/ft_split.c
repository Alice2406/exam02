/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:34:29 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/15 15:14:10 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int nb_word(char *str)
{
	int i = 0;
	int nb_word = 0;

	while (str[i])
	{
		if (i == 0 && !is_space_tab(str[i]))
			nb_word++;
		else if (!is_space_tab(str[i]) && is_space_tab(str[i - 1]) && i != 0)
			nb_word++;
		i++;
	}
	return (nb_word);
}

int len_word(char *str, i)
{
	int len = 0;
	
	while(!is_space_tab(str[i]))
		len++;
	return (len);	
}

char **ft_split(char *str)
{
	int words;
	char **tab;
	int i = 0;
	int j;
	int k;
	int len;

	if (!str)
		return (NULL);
	words = nb_word(str);
	if (words == 0)
		return (NULL);
	
	tab = malloc(sizeof(char **) * (words + 1));
	while(str[i])
	{
		if (is_space_tab(str[i]))
			i++;
		else
		{
			j = 0;
			len = len_word(str, i);
			tab[k] = malloc(sizeof(char *) * (len + 1))
			while (j <= len)
			{
				tab[k] = fill_tab(tab[k], )
				j++;
			}
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_split(av[1]);
	printf("\n");
}