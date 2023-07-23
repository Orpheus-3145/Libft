/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_part_dec.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 07:08:25 by fra           #+#    #+#                 */
/*   Updated: 2023/07/23 15:33:02 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_part_dec(double number)
{
	if (number > 0)
		return ((double) number - ft_part_int(number));
	else
		return ((double) number - ft_part_int(number) - 1);
}
