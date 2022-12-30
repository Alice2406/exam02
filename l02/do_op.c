/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:04:25 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 13:15:21 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		else if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
}