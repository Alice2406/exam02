/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:56:04 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/06 11:58:21 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
	int i = 0;
	int max;

	if (!tab)
		return (0);
	max = tab[i];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}