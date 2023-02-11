/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:57:17 by faru          #+#    #+#                 */
/*   Updated: 2022/10/16 18:55:48 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
//#include<stdio.h>
//#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;
	size_t		index;

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
/*
int main()
{
	char *s1 = "abcdef";
	char *s2 = "abcdef";
	char *s3;
	char *s4;
	memcpy(s3, s1, 4);
	ft_memcpy(s4, s2, 4);
	printf("src: %s\n", (char *) s3);
	printf("upd: %s\n", (char *) s4);
}
*/
