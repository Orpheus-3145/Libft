/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 19:44:45 by faru          #+#    #+#                 */
/*   Updated: 2022/11/03 17:01:15 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *str, char *to_find, size_t len)
{
	size_t	len_to_find;
	size_t	all_chars;

	len_to_find = ft_strlen(to_find);
	if (ft_strlen(to_find) == 0 || ! str)
		return ((char *) str);
	while (*str && len)
	{
		all_chars = 0;
		while (*str && *to_find && len && *str == *to_find)
		{
			all_chars++;
			str++;
			to_find++;
			len--;
		}
		if (all_chars == len_to_find)
			return ((char *)(str - all_chars));
		to_find -= all_chars;
		str -= all_chars - 1;
		len += all_chars - 1;
	}
	return (NULL);
}

// int main()
// {
//     //char* res = ft_strnstr(((void *)0), "fake", 3);
//     char* res2 = strnstr(((void *)0), "fake", 3);
//     //printf("res = %s\n", res);
// 	printf("res = %s\n", res2);
// }
