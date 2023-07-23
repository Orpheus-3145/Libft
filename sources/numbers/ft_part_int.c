/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_part_int.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 07:01:39 by fra           #+#    #+#                 */
/*   Updated: 2023/07/23 15:33:17 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_part_int(double number)
{
	if (number < 0)
		return ((long) number / 1 - 1);
	else
		return ((long) number / 1);
}
