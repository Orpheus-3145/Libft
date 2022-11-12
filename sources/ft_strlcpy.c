/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:42:53 by faru          #+#    #+#                 */
/*   Updated: 2022/10/19 17:59:46 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
// #include<string.h>
// #include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size)
	{
		while (index < size - 1 && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main()
{
	char *src = "provasdasd";
	char *dst1;
	char *dst2;
	size_t tot = 0;
	printf("len: %d\tdst: |%s|\n", strlcpy(dst1, src, tot), dst1);
	printf("len: %d\tdst: |%s|\n", ft_strlcpy(dst2, src, tot), dst2);
	return (0);
}
*/