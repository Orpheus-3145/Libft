/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_raise_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 05:20:28 by fra           #+#    #+#                 */
/*   Updated: 2023/02/11 02:03:21 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_raise_error(char *err_text, void **to_free_d, void ***to_free_t, size_t n_elems, int end)
{
	write(2, err_text, ft_strlen(err_text));
	write(2, "\n", 1);
	if (to_free_d && ! *to_free_d)
	{
		free(*to_free_d);
		*to_free_d = NULL;
	}
	if (to_free_t)
		ft_free_double(to_free_t, n_elems);
	if (end)
		exit(EXIT_FAILURE);
}
