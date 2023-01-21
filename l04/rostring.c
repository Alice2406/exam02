/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:45:38 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/21 17:11:25 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	print_first_word(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char *first_word;
	int i = 0;
	int len = 0;
	int j = 0;
	int space = 0;

	if (ac >= 2)
	{
		while (is_space_tab(av[1][i]))
			i++;
		while (!is_space_tab(av[1][i]) && av[1][i])
		{
			len++;
			i++;
		}
		first_word = malloc(sizeof(char) * (len + 1));
		if (!first_word)
			return (0);
		i = i - len;
		while(len-- > 0)
			first_word[j++] = av[1][i++];
		while(is_space_tab(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (is_space_tab(av[1][i]))
				space = 1;
			else if (!is_space_tab(av[1][i]))
			{
				if (space == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);
				space = 0;
			}
			i++;
		}
		if (av[1][i] != ' ')
			write(1, " ", 1);
		print_first_word(first_word);
		free(first_word);
	}
	write(1, "\n", 1);
}