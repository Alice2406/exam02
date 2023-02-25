/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:14:40 by aniezgod          #+#    #+#             */
/*   Updated: 2023/02/22 18:22:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	if (a % b == 0)
		return(b);
	return (pgcd(b, a % b));
}
 
int main(int ac, char **av)
{
	int min;
	int max;

	if (ac == 3)
	{
		min = atoi(av[2]);
		max = atoi(av[1]);
		if (atoi(av[1]) < atoi(av[2]))
		{
			min = atoi(av[1]);
			max = atoi(av[2]);
		}
		printf("%d\n", pgcd(max, min));
	}
	else
		printf("\n");
}