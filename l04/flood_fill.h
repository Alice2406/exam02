/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:26:50 by aniezgod          #+#    #+#             */
/*   Updated: 2023/01/13 12:42:31 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL
#define FLOOD_FILL

typedef struct  s_point
{
	int           x;
    int           y;
}               t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif