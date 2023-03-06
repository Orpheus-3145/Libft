/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:15:44 by faru          #+#    #+#                 */
/*   Updated: 2023/03/06 04:15:35 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int to_write, size_t n)
{
	size_t			counter;
	char			*tmp_str;

	counter = 0;
	tmp_str = (char *) str;
	while (counter < n)
	{
		*(tmp_str + counter) = to_write;
		counter++;
	}
	return ((void *) tmp_str);
}
