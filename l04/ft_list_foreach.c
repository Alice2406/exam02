/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:45:31 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 16:32:56 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dans le .h//

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
//----------//

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}