/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_raise_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 05:20:28 by fra           #+#    #+#                 */
/*   Updated: 2023/07/02 00:54:11 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_raise_error(char *text, int end)
{
	perror(text);
	if (end)
		exit(EXIT_FAILURE);
	else
		return (NULL);
}
