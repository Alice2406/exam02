/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:06:50 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 18:34:15 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

int max (unsigned int a, unsigned int b)
{
	if (a > b)
		return (a);
	return (b);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int nb;
	int i = 1;
	int lcm;
	
	if (a == 0 || b == 0)
		return (0);
	nb = max(a, b);
	lcm = nb * i;
	while (lcm % min(a, b) != 0)
	{
		i++;
		lcm = nb * i;
	}
	return (lcm);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int lm;

	lm = lcm(45, 3);
	printf("%d\n", lm);

}