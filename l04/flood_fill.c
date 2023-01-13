/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:22:31 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 12:55:06 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//---- i dont know------//

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (tab[cur.y][cur.x] != to_fill || cur.y < 0 || cur.x < 0
		|| cur.y >= size.y || cur.x >= size.x)
		return;
	
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
