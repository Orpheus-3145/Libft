/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:47:01 by faru          #+#    #+#                 */
/*   Updated: 2022/10/20 19:06:10 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

int	ft_memcmp(const void *src, const void *dst, size_t n)
{
	const char		*c_src;
	const char		*c_dst;
	size_t			cnt;

	c_src = (const char *) src;
	c_dst = (const char *) dst;
	cnt = 0;
	if (! n)
		return (0);
	while (cnt < n)
	{
		if (c_src[cnt] != c_dst[cnt])
			return ((unsigned char) c_src[cnt] - (unsigned char) c_dst[cnt]);
		cnt++;
	}
	return (0);
}
/*
int main()
{
	//const char *a, *b; 
	//a = malloc(10);
	//b = malloc(10);
	//printf("std->diff: %d\n", memcmp("NULL", b, 3));
	//printf("upd->diff: %d\n", ft_memcmp("NULL", b, 3));
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("diff: %d\n", ft_memcmp(s2, s3, 4));
	return (0);
}
*/