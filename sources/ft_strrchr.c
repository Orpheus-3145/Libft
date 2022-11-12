/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:17:44 by faru          #+#    #+#                 */
/*   Updated: 2022/10/17 19:44:11 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *str_to_search, int to_find)
{
	size_t			pos;
	unsigned char	uc_to_find;

	uc_to_find = (unsigned char) to_find;
	pos = ft_strlen(str_to_search);
	if (uc_to_find == 0)
		return ((char *)(str_to_search + pos));
	while (pos--)
	{
		if (str_to_search[pos] == uc_to_find)
			return ((char *)(str_to_search + pos));
	}
	return (NULL);
}
/*
int main()
{
	printf("std->trovato: %s\n", strrchr("dAcAf", 'A'));
	printf("mia->trovato: %s\n", ft_strrchr("dAcAf", 'A'));
	return (0);
}
*/