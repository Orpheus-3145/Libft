/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 16:12:33 by faru          #+#    #+#                 */
/*   Updated: 2022/11/30 16:14:36 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

static int	is_space(char c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

long	ft_atol(const char *str)
{
	int		sign;
	size_t	nbr;

	nbr = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - '0');
	return (((long) nbr) * sign);
}