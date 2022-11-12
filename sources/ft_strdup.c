/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 19:37:50 by faru          #+#    #+#                 */
/*   Updated: 2022/10/18 14:57:42 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
#include"libft.h"

char	*ft_strdup(const char *str)
{
	size_t	lenght_str;
	char	*new_str;

	lenght_str = ft_strlen(str);
	new_str = (char *) malloc((lenght_str + 1) * sizeof(char));
	if (! new_str)
		return (NULL);
	new_str[lenght_str] = '\0';
	while (lenght_str--)
		new_str[lenght_str] = str[lenght_str];
	return (new_str);
}
/*
int main()
{
	char *str1 = NULL;
	printf("std-> %s\n", strdup(str1));
	printf("upd-> %s\n", ft_strdup(str1));
	return (0);
}
*/
