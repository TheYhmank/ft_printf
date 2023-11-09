/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:37:52 by ayermeko          #+#    #+#             */
/*   Updated: 2023/11/09 21:47:01 by ayermeko         ###   ########.fr       */
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
        return (NULL);
    while (*s)
    {
        count += ft_putchr_len((int)*s);
        s++;
    }
    return (count);
}