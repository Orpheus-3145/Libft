/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_trim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 12:42:47 by faru          #+#    #+#                 */
/*   Updated: 2023/05/17 15:49:46 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trim(char *to_trim)
{
	char	*trimmed;
	int32_t	start;
	int32_t	end;
	int32_t	i;

	if ((! to_trim) || (! *to_trim))
		return (to_trim);
	start = 0;
	end = ft_strlen(to_trim) - 1;
	while (to_trim[start] && ft_isspace(to_trim[start]))
		start++;
	while (end > start && ft_isspace(to_trim[end]))
		end--;
	if ((start == 0) && (end == (int32_t) ft_strlen(to_trim) - 1))
		return (to_trim);
	trimmed = ft_calloc((end - start + 2), sizeof(char));
	if (trimmed)
	{
		i = 0;
		while (start + i <= end)
		{
			trimmed[i] = to_trim[start + i];
			i++;
		}
	}
	free(to_trim);
	return (trimmed);
}
