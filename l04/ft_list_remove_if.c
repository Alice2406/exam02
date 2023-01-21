/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:26:21 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/15 14:33:56 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//--------dans le .h-------//

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

//-------------------------//

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;

	t_list *lst = *begin_list;
	if (cmp(lst->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(lst);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	lst = *begin_list;
	ft_list_remove_if(&lst->next, data_ref, cmp);
}