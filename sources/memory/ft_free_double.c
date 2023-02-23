/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_double.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 22:18:30 by fra           #+#    #+#                 */
/*   Updated: 2023/02/23 19:36:20 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_double(void ***to_free, size_t n_arr)
{
	size_t	i;

	if (to_free)
	{
		i = 0;
		while (i < n_arr)
		{
			free((*to_free)[i]);
			i++;
		}
		free(*to_free);
		*to_free = NULL;
	}
	return (NULL);
}
