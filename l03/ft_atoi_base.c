/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:11:47 by aniezgod          #+#    #+#             */
/*   Updated: 2023/02/25 15:44:41 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(c + 32);
    return (c);
}

int get_digit(char c, int base)
{
    int max;

    if (base <= 10)
        max = base + '0';
    else
        max = base - 10 + 'a';
    if (c >= '0' && c <= '9' && c <= max)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max)
        return (10 + c - 'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int nb = 0;
    int sign = 1;
    int digit;
 
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while((digit = get_digit(to_lower(*str), str_base)) >= 0)
    {
        nb = nb * str_base + digit;
        str++;
    }
    return (nb * sign);
}
