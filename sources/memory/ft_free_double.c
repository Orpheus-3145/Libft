/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_double.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 22:18:30 by fra           #+#    #+#                 */
/*   Updated: 2023/09/21 12:57:58 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_double(void **to_free, int n_arr)
{
	int		i;
	char	**tmp;

	if (to_free)
	{
		i = 0;
		if (n_arr == -1)
		{
			tmp = (char **) to_free;
			while (tmp[i])
				ft_free(tmp[i++]);
			ft_free(tmp[i]);
			ft_free(tmp);
		}
		else
		{
			while (i < n_arr)
				ft_free(to_free[i++]);
			ft_free(to_free);
		}
	}
	return (NULL);
}
