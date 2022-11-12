/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 23:49:07 by anonymous     #+#    #+#                 */
/*   Updated: 2022/11/11 23:46:18 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);

size_t	print_ph(va_list *ptr, char ph, char flag);

int		check_char(char to_check, char *str_check);

int		check_str(const char *str);

size_t	print_int(int to_print, char flag);

size_t	print_uint(unsigned int to_print);

size_t	print_hex(unsigned int to_print, int capital, char flag);

size_t	print_str(char *to_print);

size_t	print_ptr(size_t to_print);

size_t	len_nbr(size_t nbr, int base);

char	*ft_litoa(long n);

char	*ft_xitoa(size_t n, int capital);

size_t	ft_putchar(char c);

size_t	ft_putstr(char *str);

#endif
