/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:50:21 by ayermeko          #+#    #+#             */
/*   Updated: 2023/11/10 12:57:32 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int ft_printf(const char *, ...);
int handle_format(const char specifier, va_list arg);
int ft_putchr_len(int c);
int ft_putstr_len(char *s);
int ft_putper_len(unsigned long long pter, int per_prefix);

#endif