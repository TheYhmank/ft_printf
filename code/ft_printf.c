/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:52:35 by ayermeko          #+#    #+#             */
/*   Updated: 2023/11/10 12:43:37 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_format(const char specifier, va_list arg)
{
	if (specifier == 'c')
		return (ft_putchr_len(va_arg(arg, int)));
	else if (specifier == 's')
		return (ft_putstr_len(va_arg(arg, char *)));
	else if (specifier == 'p')
		return (ft_putptr_len((unsigned long long)va_arg(arg, void *), 0));
	else if (specifier == 'd' || specifier == 'i')
		return (put_nbr_u_hex_len(va_arg(arg, int), 10, 0));
	else if (specifier == 'u')
		return (put_nbr_u_hex_len(va_arg(arg, unsigned int), 10, 0));
	else if (specifier == 'x')
		return (put_nbr_u_hex_len(va_arg(arg, unsigned int), 16, 0));
	else if (specifier == 'X')
		return (put_nbr_u_hex_len(va_arg(arg, unsigned int), 16, 1));
	else if (specifier == '%')
		return (ft_putchr_len('%'));
	else
		return (-1);   
}

int ft_printf(const char *format, ...)
{
    int return_value;
    va_list args;

    va_start(args, format);
    return_value = 0;
    if (format == NULL)
        return (NULL);
    while (*format)
    {
        if (format == '%')
            return_value += handle_format(*(++format), args);
        else
            return_value += write(1, format, 1);
        ++format;
    }
    va_end(args);
    return (return_value);
}

int main(void)
{
	int res;

	res = ft_printf("%c", 'd');
	printf("res: %d", res);
	return (0);
}