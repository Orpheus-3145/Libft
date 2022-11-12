/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils_bonus.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 21:22:08 by faru          #+#    #+#                 */
/*   Updated: 2022/11/11 23:15:58 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	len_nbr(size_t nbr, int base)
{
	size_t	cnt;

	cnt = 0;
	if (! nbr)
		cnt++;
	while (nbr)
	{
		nbr /= base;
		cnt++;
	}
	return (cnt);
}

char	*ft_litoa(long n)
{
	char	*str_nbr;
	size_t	tmp;
	size_t	n_digits;

	if (n < 0)
		tmp = n * -1;
	else
		tmp = n;
	n_digits = len_nbr(tmp, 10) + (n < 0);
	str_nbr = (char *) malloc(n_digits + 1);
	if (! str_nbr)
		return (NULL);
	str_nbr[n_digits--] = '\0';
	while (tmp != 0)
	{
		str_nbr[n_digits--] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		str_nbr[n_digits] = '-';
	else if (n == 0)
		str_nbr[n_digits] = '0';
	return (str_nbr);
}

char	*ft_xitoa(size_t n, int capital)
{
	size_t	size;
	char	*str_nbr;
	char	*base;

	size = len_nbr(n, 16);
	str_nbr = (char *) malloc(size + 1);
	if (! str_nbr)
		return (NULL);
	if (capital)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	str_nbr[size--] = '\0';
	if (! n)
		str_nbr[size] = '0';
	while (n)
	{
		str_nbr[size--] = base[n % 16];
		n /= 16;
	}
	return (str_nbr);
}

size_t	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
	return (1);
}

size_t	ft_putstr(char *str)
{
	size_t	cnt;

	cnt = 0;
	if (str)
	{
		while (*str)
			cnt += ft_putchar(*str++);
	}
	return (cnt);
}
