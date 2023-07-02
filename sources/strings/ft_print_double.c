/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_double.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/02 23:34:52 by fra           #+#    #+#                 */
/*   Updated: 2023/07/02 23:58:12 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_double(char **str, char *prompt)
{
	while (str && *str)
	{
		if (prompt)
			ft_printf("%s", prompt);
		ft_printf("%s\n", *str++);
	}
}
