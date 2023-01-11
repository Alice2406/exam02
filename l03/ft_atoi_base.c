/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:33 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 16:47:33 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i] != '\0')
	{
		i++;
	}
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	ft_avance(char *str, char *base, int i, int size_base)
{
	int	j;
	int	number;

	j = 0;
	number = 0;
	while (ft_get_index_in_base(str[i], base) != -1)
	{
		j = ft_get_index_in_base(str[i], base);
		number = number * size_base + j;
		i++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	compteur;
	int	size_base;
	int	number;

	i = 0;
	compteur = 1;
	size_base = ft_strlen(base);
	if (str[i] == '-')
	{
		compteur = -1;
		i++;
	}
	number = ft_avance(str, base, i, size_base);
	return (number * compteur);
}