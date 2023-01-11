/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:34:33 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 15:31:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lowercase(char c)
{
	if (c >= 'a' && c <='z')
		return (1);
	return (0);
}

int is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	low_to_up(char c)
{
	c = c - 32;
	write(1, &c, 1);
}

void	up_to_low(char c)
{
	c = c + 32;
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main (int ac, char **av)
{
	int i = 1;
	int j;
	int len;

	if (ac >= 2)
	{
		while(av[i])
		{
			j = 0;
			len = ft_strlen(av[i]) - 1; 
			while(av[i][j])
			{
				if (j == len && is_lowercase(av[i][j]))
					low_to_up(av[i][j]);
				else if (j != len && is_lowercase(av[i][j]) && is_space_tab(av[i][j + 1]))
					low_to_up(av[i][j]);
				else if (j != len && is_uppercase(av[i][j]) && !is_space_tab(av[i][j + 1]))
					up_to_low(av[i][j]);
				else
					write (1, &av[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}