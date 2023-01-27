/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:59:44 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/27 15:29:43 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit = 128;

	while(bit > 0)
	{
		if (octet & bit)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit /= 2;
	}
}