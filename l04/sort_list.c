/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:26:18 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/21 17:33:05 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//-------------------dans le .h---------------//

typedef struct s_list{
	int data;
	t_list	*next;
}				t_list;

//--------------------------------------------//

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;
	
	tmp = lst;
	while(lst->next != NULL)
	{
		if ((cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}