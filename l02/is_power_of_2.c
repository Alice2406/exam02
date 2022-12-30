/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:05:28 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 17:15:18 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
	unsigned int nb = 1;
	
	while(number <= n)
	{
		if (number == n)
			return 1;
		number = number * 2;
	}
	return 0;
}
