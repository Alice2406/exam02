/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:51:34 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 15:00:50 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int compteur;
	int nb;
	int i;
	
	compteur = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compteur = -1;
		i++;
	}
	while(str[i] >= '1' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * compteur);
}