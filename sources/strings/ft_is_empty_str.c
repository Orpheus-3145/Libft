/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_empty_str.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/02 20:50:26 by fra           #+#    #+#                 */
/*   Updated: 2023/07/03 01:29:47 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_is_empty_str(char	*to_check)
{
	if (to_check == NULL)
		return (false);
	while (ft_isspace(*to_check))
		to_check++;
	return (*to_check == '\0');
}
