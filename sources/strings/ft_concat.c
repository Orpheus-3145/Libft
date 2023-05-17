/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_concat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/16 19:17:30 by fra           #+#    #+#                 */
/*   Updated: 2023/05/17 11:53:38 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_concat(char *str1, char *str2)
{
	uint32_t	len_s1;
	uint32_t	len_s2;
	char		*cat;

	if ((! str1) && (! str2))
		return (NULL);
	len_s1 = ft_strlen(str1);
	len_s2 = ft_strlen(str2);
	cat = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (cat)
	{
		cat[len_s1 + len_s2] = '\0';
		while (len_s2--)
			cat[len_s1 + len_s2] = str2[len_s2];
		while (len_s1--)
			cat[len_s1] = str1[len_s1];
	}
	if (str1)
		free(str1);
	if (str2)
		free(str2);
	return (cat);
}
