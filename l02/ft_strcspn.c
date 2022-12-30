/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:08:30 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 15:17:28 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
check if a char of reject is in s :
	- if there is one -> return nb of the place which th char is the same 
	- if both of strings are different -> return the length of the string s
*/