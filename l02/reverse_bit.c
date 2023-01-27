/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:11:22 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/27 15:40:03 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bit(unsigned char octet)
{
	unsigned char c;
	int bit = 128;
	int reverse = 1;

	while (bit != 1)
	{
		if (bit & octet)
			c = c | reverse;
		reverse *= 2;
		bit /= 2;
	}
	return (c);
}
