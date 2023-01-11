/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:26:10 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 18:10:34 by aniezgod         ###   ########.fr       */
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

int	*ft_range(int start, int end)
{
	int size;
	int i = 0;
	int *array = NULL;

	size = ft_array_size(start, end);
	array = malloc(sizeof(int *) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		if (start > end)
			array[i] = start - i;
		else
			array[i] = start + i;
		i++;
	}
	return(array);	
}
