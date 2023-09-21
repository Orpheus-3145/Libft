/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:57:17 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 12:57:58 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;
	size_t		index;

	if (! src)
		return (dest);
	new_dest = (char *) dest;
	new_src = (const char *) src;
	if (new_dest == new_src)
		return (dest);
	index = 0;
	while (index < n)
	{
		new_dest[index] = new_src[index];
		index++;
	}
	return (dest);
}
