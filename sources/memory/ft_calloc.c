/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:16:10 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 12:57:58 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_ele, size_t size_ele)
{
	char	*dyn_ptr;
	size_t	cnt;

	dyn_ptr = (char *) malloc(n_ele * size_ele);
	if (dyn_ptr == NULL)
		return (NULL);
	cnt = 0;
	while (cnt < n_ele * size_ele)
		*(dyn_ptr + cnt++) = 0;
	return ((void *) dyn_ptr);
}
