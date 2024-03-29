/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:16:59 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 13:09:31 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (NULL);
}
