/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:24:08 by aniezgod          #+#    #+#             */
/*   Updated: 2022/12/30 15:29:27 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strpbrk(const char *s1, const char *s2)
{
	int j;

	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return (char *) s1;
			j++;
		}
		s1++;
	}
	return (NULL);
}