/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 17:29:08 by anonymous     #+#    #+#                 */
/*   Updated: 2023/07/12 12:37:11 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int nb, int fd)
{
	char	str_nbr[12];
	long	l_n;
	size_t	n_digits;

	l_n = (long) nb;
	if (nb < 0)
		l_n *= -1;
	n_digits = ft_nbrlen(l_n, 10) + (nb < 0);
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
	return (ft_putstr_fd(str_nbr, fd));
}
