/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:52:47 by pibouill          #+#    #+#             */
/*   Updated: 2023/11/12 13:37:18 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __APPLE__
#  define PTR_NULL "0x0"
# else
#  define PTR_NULL "(nil)"
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	putchar_len(int c);
int	putstr_len(char *str);
int	putptr_len(unsigned long long ptr, int ptr_prefix);
int	put_nbr_u_hex_len(long n, int base, int is_uppercase);

#endif
