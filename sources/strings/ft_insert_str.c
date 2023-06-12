/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_insert_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/11 15:43:55 by faru          #+#    #+#                 */
/*   Updated: 2023/06/12 11:56:07 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_insert_str(char *old, char *sub, uint32_t start, uint32_t end)
{
	uint32_t	old_len;
	uint32_t	new_len;
	uint32_t	sub_len;
	char		*update_str;
	char		*tmp;

	old_len = ft_strlen(old);
	sub_len = ft_strlen(sub);
	new_len = start - 1 + sub_len + old_len - end;
	update_str = ft_calloc(new_len + 1, sizeof(char));
	if (update_str)
	{
		tmp = update_str;
		ft_strlcpy(tmp, old, start);
		tmp += start - 1;
		ft_strlcpy(tmp, sub, sub_len + 1);
		tmp += sub_len;
		ft_strlcpy(tmp, old + end, old_len - end + 1);
	}
	ft_free(old);
	return (update_str);
}
