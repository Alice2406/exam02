/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:53:22 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 18:10:51 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_size(int start, int end)
{
	int len = 1;

	if (start == end)
		len = 1;
	while (start != end)
	{
		if (start > end)
			end++;
		else if (start < end)
			start++;
		len++;
	}
	return (len);
	
}

int	*ft_rrange(int start, int end)
{
	int size;
	int i;
	int j;
	int *array = NULL;

	size = ft_array_size(start, end);
	array = malloc(sizeof(int *) * size);
	if (!array)
		return (NULL);
	i = size -  1;
	j = 0;
	while (i >= 0)
	{
		if (start > end)
			array[j] = start - i;
		else
			array[j] = start + i;
		i--;
		j++;
	}
	return(array);	
}
