/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fra <fra@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:17:30 by fra               #+#    #+#             */
/*   Updated: 2023/05/27 19:30:31 by fra              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_concat(char *old, char *to_append)
{
	uint32_t	len_old;
	uint32_t	len_to_append;
	char		*cat;

	if ((! old) && (! to_append))
		return (NULL);
	len_old = ft_strlen(old);
	len_to_append = ft_strlen(to_append);
	cat = ft_calloc((len_old + len_to_append + 1), sizeof(char));
	if (cat)
	{
		while (len_to_append--)
			cat[len_old + len_to_append] = to_append[len_to_append];
		while (len_old--)
			cat[len_old] = old[len_old];
	}
	ft_free(old);
	ft_free(to_append);
	return (cat);
}
