/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:23:32 by faru          #+#    #+#                 */
/*   Updated: 2023/07/12 12:37:11 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	lenght;

	lenght = 0;
	while (str && *str++)
		lenght++;
	return (lenght);
}
