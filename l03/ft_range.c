/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:26:10 by aniezgod          #+#    #+#             */
/*   Updated: 2023/02/25 17:58:27 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(int a, int b)
{
    int min = a;
    int max = b;

    if (min > max)
    {
        min = b;
        max = a;
    }
    return(max -  min + 1);
}

int *ft_range(int start, int end)
{
    int *tab;
    int i = 0;
    int size;

    size = ft_strlen(start, end);
    tab = malloc(sizeof(int) * size);
    if (!tab)
        return (NULL);
    if (start < end)
        while (i < size)
            tab[i++] = start++;
    else
        while(i < size)
            tab[i++] = start--;
    return (tab);
}
