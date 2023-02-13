/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:16:59 by faru          #+#    #+#                 */
/*   Updated: 2022/10/20 19:23:35 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include"libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *str_to_search, int to_find)
{
	unsigned char	uc_to_find;

	uc_to_find = (unsigned char) to_find;
	if (! str_to_search)
		return (NULL);
	while (*str_to_search)
	{
		if (*str_to_search == uc_to_find)
			return ((char *) str_to_search);
		str_to_search++;
	}
	if (uc_to_find == 0)
		return ((char *) str_to_search);
	else
		return (NULL);
}
/*
int main()
{
	printf("std->trovato: %s\n", strchr("dcf", -18));
	printf("mia->trovato: %s\n", ft_strchr("dcf", -18));
	return (0);
}
*/
