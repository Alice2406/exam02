/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:48:03 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/30 14:00:23 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (char *) s;
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;

	if (!s || !accept)
		return (NULL);
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}