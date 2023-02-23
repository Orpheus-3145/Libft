/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_long.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/22 23:55:44 by fra           #+#    #+#                 */
/*   Updated: 2023/02/23 21:10:54 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_long(char *number)
{
	int	i;

	i = 0;
	if (! number)
		return (0);
	if (number[i] == '+' || number[i] == '-')
		i++;
	if (! number[i])
		return (0);
	while (number[i])
	{
		if (! ft_isdigit(number[i++]))
			return (0);
	}
	return (1);
}
