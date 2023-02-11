/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:00:40 by faru          #+#    #+#                 */
/*   Updated: 2022/10/21 18:27:26 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include"libft.h"
#include<stdio.h>

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (! str || ! set)
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	while (ft_strchr(set, str[start]) && str[start])
		start++;
	while (ft_strrchr(set, str[end]) && end)
		end--;
	if (start > end)
		trimmed = ft_strdup("");
	else
		trimmed = ft_substr(str, start, end - start + 1);
	return (trimmed);
}

// int main()
// {
//     const char *s = "";
//     const char *set = "";
// 	printf("source: |%s|\ntrimmed: |%s|\n", s, ft_strtrim(s, set));
//     return (0);
// }
