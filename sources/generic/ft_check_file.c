/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_file.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/25 00:29:45 by fra           #+#    #+#                 */
/*   Updated: 2023/08/01 18:19:26 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_check_file(char *file_name, int32_t mode, char *ext_name)
{
	int32_t		fd;
	uint32_t	len_ext;
	uint32_t	len_file;

	fd = open(file_name, mode);
	if (fd == -1)
		return (false);
	close(fd);
	if (ext_name)
	{
		len_ext = ft_strlen(ext_name);
		len_file = ft_strlen(file_name);
		if (ft_strncmp(file_name + len_file - len_ext, ext_name, len_ext))
			return (false);
	}
	return (true);
}
