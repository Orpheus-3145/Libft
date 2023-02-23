/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_single.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 18:32:15 by fra           #+#    #+#                 */
/*   Updated: 2023/02/23 18:39:52 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_double(void **to_free, size_t n_arr)
{
	if (*to_free)
	{
		free(*to_free);
		to_free = NULL;
	}
}
