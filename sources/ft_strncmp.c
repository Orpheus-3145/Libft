/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:19:15 by faru          #+#    #+#                 */
/*   Updated: 2022/10/16 19:11:53 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	index;

	index = 0;
	while (str1[index] && index < n)
	{
		if (str1[index] != str2[index])
			return ((unsigned char) str1[index] - (unsigned char) str2[index]);
		index++;
	}
	if (! str2[index] || index == n)
		return (0);
	else
		return (0 - (unsigned char) str2[index]);
}
/*
int main()
{
	const char *a = NULL, *b = NULL;
	//printf("std->%d\n", strncmp(a, b, 0));
	printf("upd->%d\n", ft_strncmp("test", "testss", 7));
	return (0);
}
*/
