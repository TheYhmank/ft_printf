/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfr_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:37:52 by ayermeko          #+#    #+#             */
/*   Updated: 2023/11/10 12:57:27 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchr_len(int c)
{
    return (write(1, c, 1));
}

int ft_putstr_len(char *s)
{
    int count;

    count = 0;
    if (s == NULL)
        return (ft_putstr_len("null"));
    while (*s)
    {
        count += putchar((int)*s);
        s++;
    }
    return (count);
}

int ft_putper_len(unsigned long long pter, int per_prefix)
{
    int count;
    char *symbol;


}