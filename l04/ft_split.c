/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:34:29 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/21 16:18:45 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	len_word(char *str, int i)
{
	int	len;

	len = 0;
	while (str[i] && is_space_tab(str[i]))
		i++;
	while (str[i])
	{
		if (is_space_tab(str[i]))
			return (len);
		i++;
		len++;
	}
	return (len);
}

static char	**ft_split2(char **chaine, char *str)
{
	int	i = 0;
	int	r;
	int j = 0;
	int	len_mot_chaine;

	while (j < nb_word(str))
	{
		len_mot_chaine = len_word(str, i);
		chaine[j] = malloc(sizeof(char) * len_mot_chaine + 1);
		if (!chaine[j])
			return (NULL);
		while (is_space_tab(str[i]))
			i++;
		r = 0;
		while (r < len_mot_chaine)
			chaine[j][r++] = str[i++];
		chaine[j++][r] = '\0';
	}
	chaine[j] = 0;
	return (chaine);
}

char	**ft_split(char *s)
{
	char	**chaine;

	if (!s)
		return (NULL);
	if (nb_word(s) != 0 || *s)
	{
		chaine = malloc(sizeof(char *) * (nb_word(s) + 1));
		if (!chaine)
			return (NULL);
		chaine = ft_split2(chaine, s);
		return (chaine);
	}
	else
	{
		chaine = malloc(sizeof(char *) * 1);
		if (!chaine)
			return (NULL);
		chaine[0] = 0;
		return (chaine);
	}
}

#include <stdio.h>

int main(int ac, char **av)
{
	char **chaine;
	int i = 0;

	if (ac == 2)
	{
		chaine = ft_split(av[1]);
		while(chaine[i])
			printf("%s\n", chaine[i++]);
	}
	printf("\n");
}