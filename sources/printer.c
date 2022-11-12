/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printer.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 12:00:37 by faru          #+#    #+#                 */
/*   Updated: 2022/11/11 23:18:29 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_int(int to_print, char flag)
{
	size_t	count;
	char	*str_int;

	count = 0;
	str_int = ft_litoa(to_print);
	if (! str_int)
		return (0);
	if (flag && to_print >= 0)
		count += ft_putchar(flag);
	count += ft_putstr(str_int);
	free(str_int);
	return (count);
}

size_t	print_uint(unsigned int to_print)
{
	size_t	count;
	char	*str_uint;

	str_uint = ft_litoa(to_print);
	if (! str_uint)
		return (0);
	count = ft_putstr(str_uint);
	free(str_uint);
	return (count);
}

size_t	print_hex(unsigned int to_print, int capital, char flag)
{
	size_t	count;
	char	*str_hex;

	count = 0;
	str_hex = ft_xitoa(to_print, capital);
	if (! str_hex)
		return (0);
	if (flag && to_print)
	{
		if (capital)
			count += ft_putstr("0X");
		else
			count += ft_putstr("0x");
	}
	count += ft_putstr(str_hex);
	free(str_hex);
	return (count);
}

size_t	print_str(char *to_print)
{
	if (! to_print)
		to_print = "(null)";
	return (ft_putstr(to_print));
}

size_t	print_ptr(size_t to_print)
{
	size_t	count;
	char	*str_ptr;

	count = 0;
	str_ptr = ft_xitoa(to_print, 0);
	if (! str_ptr)
		return (0);
	count += ft_putstr("0x");
	count += ft_putstr(str_ptr);
	free(str_ptr);
	return (count);
}
