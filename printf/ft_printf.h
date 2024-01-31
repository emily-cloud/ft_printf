/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:27:57 by hai               #+#    #+#             */
/*   Updated: 2024/01/31 12:12:34 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list ap);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(long long unsigned int n);
int	ft_print_digit(long n);
int	ft_printx(long unsigned int n);
int	ft_printupx(long unsigned int n);

#endif
