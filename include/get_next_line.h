/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 20:37:18 by anonymous     #+#    #+#                 */
/*   Updated: 2023/02/11 02:04:03 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_crs
{
	char			*buffer;
	size_t			pos;
	int				fd;
	int				eof;
	int				reload;
	int				error;
	struct s_crs	*next;
}	t_crs;

t_crs	*allocate_cursor(int fd);

int		has_n_line(t_crs *crs);

char	*append_str(char *left, t_crs *crs, size_t start);

int		fill_buffer(t_crs *crs);

char	*read_line(t_crs *crs);

char	*get_next_line(int fd);

void	free_crs_list(t_crs **crs_lst);

t_crs	*append_crs(t_crs *list, int fd);

t_crs	*get_crs_from_fd(t_crs *crs_list, int fd);

void	check_crs_to_free(t_crs **list);

#endif