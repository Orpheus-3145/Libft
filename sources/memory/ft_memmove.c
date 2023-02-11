/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:49:19 by faru          #+#    #+#                 */
/*   Updated: 2022/10/16 18:48:16 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dst;
	const char	*char_src;

	char_dst = (char *) dst;
	char_src = (const char *) src;
	if (dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			char_dst[len] = char_src[len];
	}
	return (dst);
}
