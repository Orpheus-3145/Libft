/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_raise_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 05:20:28 by fra           #+#    #+#                 */
/*   Updated: 2023/01/30 22:42:25 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_raise_error(char *err_text, void **to_free, int end)
{
	write(2, err_text, ft_strlen(err_text));
	write(2, "\n", 1);
	if (to_free && ! *to_free)
	{
		free(*to_free);
		*to_free = NULL;
	}
	if (end)
		exit(EXIT_FAILURE);
}
