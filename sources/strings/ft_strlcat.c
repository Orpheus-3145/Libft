/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:45:43 by faru          #+#    #+#                 */
/*   Updated: 2022/11/02 17:43:28 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
//#include<string.h>
//#include<stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	index;
	size_t	max_chars;

	if (dest)
		len_dest = ft_strlen(dest);
	else
		len_dest = 0;
	if (size > len_dest)
	{
		index = 0;
		max_chars = size - len_dest - 1;
		while (index < max_chars && src[index] != '\0')
		{
			dest[len_dest + index] = src[index];
			index++;
		}
		dest[len_dest + index] = '\0';
		return (ft_strlen(src) + len_dest);
	}
	else
		return (ft_strlen(src) + size);
}
/*
int main()
{
	char *src = "aaaa";
	char *dst = NULL;
	size_t tot = 0;
	printf("std->len: %zu\tdst: |%s|\n", strlcat(dst, src, tot), dst);
	printf("mia->len: %zu\tdst: |%s|\n", ft_strlcat(dst, src, tot), dst);
	return (0);
}
*/