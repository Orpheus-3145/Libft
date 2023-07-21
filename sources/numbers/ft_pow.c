/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pow.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 20:45:19 by fra           #+#    #+#                 */
/*   Updated: 2023/07/21 23:11:47 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(int base, int exp)
{
	double	pow;

	pow = 1;
	if (exp > 0)
	{
		while (exp--)
			pow *= base;
	}
	else
		pow = (double) 1 / ft_pow(base, exp * -1);
	return (pow);
}
