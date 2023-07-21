/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_part_int.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 07:01:39 by fra           #+#    #+#                 */
/*   Updated: 2023/07/21 23:10:03 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_part_int(double number)
{
	if (number < 0)
		return ((int) number / 1 - 1);
	else
		return ((int) number / 1);
}
