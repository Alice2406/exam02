/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:21:00 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/11 17:25:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Dans le .h

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}    
*/

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while(begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}