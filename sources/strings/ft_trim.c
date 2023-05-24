/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_trim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 12:42:47 by faru          #+#    #+#                 */
/*   Updated: 2023/05/24 15:55:15 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trim(char *to_trim, bool free_str)
{
	char	*trimmed;
	char	*tmp;
	int32_t	length;

	if ((! to_trim) || (! *to_trim))
		return (to_trim);
	tmp = to_trim;
	while (*tmp && ft_isspace(*tmp))
		tmp++;
	if (*tmp == '\0')
		return (to_trim);
	length = ft_strlen(tmp) - 1;
	while (ft_isspace(tmp[length]))
		length--;
	trimmed = ft_substr(tmp, 0, length + 1);
	if (free_str)
		free(to_trim);
	return (trimmed);
}
