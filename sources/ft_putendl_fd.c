/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 02:47:05 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/20 19:08:23 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_putendl_fd(char *str, int fd)
{
	size_t tot;
	
	tot = 0;
	if (str)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
		tot +=1;
	}
	return (tot + ft_strlen(str));
}
