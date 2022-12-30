/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:29:58 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 15:46:55 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = -1;
	len = ft_strlen(str);
	while(++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}
