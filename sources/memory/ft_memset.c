/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:15:44 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 12:57:58 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int to_write, size_t n)
{
	size_t	counter;
	char	*tmp_str;

	if (str)
	{
		counter = 0;
		tmp_str = (char *) str;
		while (counter < n)
			tmp_str[counter++] = to_write;
	}
	return (str);
}
