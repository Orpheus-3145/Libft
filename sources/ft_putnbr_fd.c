/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 17:29:08 by anonymous     #+#    #+#                 */
/*   Updated: 2022/11/11 23:17:40 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	l_nbr(long nbr)
{
	size_t	cnt;

	cnt = 0;
	if (! nbr)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		cnt++;
	}
	return (cnt);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	str_nbr[12];
	long	l_n;
	size_t	n_digits;

	l_n = (long) nb;
	if (nb < 0)
		l_n *= -1;
	n_digits = l_nbr(l_n) + (nb < 0);
	str_nbr[n_digits--] = '\0';
	while (l_n != 0)
	{
		str_nbr[n_digits--] = l_n % 10 + '0';
		l_n /= 10;
	}
	if (nb < 0)
		str_nbr[n_digits] = '-';
	else if (nb == 0)
		str_nbr[n_digits] = '0';
	ft_putstr_fd(str_nbr, fd);
}
