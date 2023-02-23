/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 03:04:19 by anonymous     #+#    #+#                 */
/*   Updated: 2023/02/23 01:49:24 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_crs	*allocate_cursor(int fd)
{
	t_crs	*crs;

	crs = (t_crs *) malloc(sizeof(t_crs));
	if (! crs)
		return (NULL);
	crs->buffer = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (! crs->buffer)
	{
		free(crs);
		crs = NULL;
		return (NULL);
	}
	crs->pos = 0;
	crs->fd = fd;
	crs->eof = 0;
	crs->reload = 1;
	crs->next = NULL;
	crs->error = 0;
	return (crs);
}

int	has_n_line(t_crs *crs)
{
	while (crs->buffer[crs->pos] && crs->buffer[crs->pos] != '\n')
		(crs->pos)++;
	if (crs->buffer[crs->pos])
	{
		(crs->pos)++;
		return (1);
	}
	return (0);
}

char	*append_str(char *old, t_crs *crs, size_t start)
{
	size_t	len_old;
	size_t	len_right;
	char	*new_str;

	len_old = 0;
	while (old && old[len_old])
		len_old++;
	len_right = crs->pos - start;
	if (crs->buffer[crs->pos - 1] == '\n')
		len_right--;
	if (! (len_old + len_right))
		return (NULL);
	new_str = (char *) malloc((len_old + len_right + 1) * sizeof(char));
	crs->error = (crs->error || ! new_str);
	if (new_str)
	{
		new_str[len_old + len_right] = '\0';
		while (len_right--)
			new_str[len_old + len_right] = crs->buffer[start + len_right];
		while (len_old--)
			new_str[len_old] = old[len_old];
	}
	if (old)
		free(old);
	return (new_str);
}

int	fill_buffer(t_crs *crs)
{
	ssize_t	chars_read;

	if (crs->reload)
	{
		chars_read = read(crs->fd, crs->buffer, BUFFER_SIZE);
		crs->eof = chars_read < 0;
		if (crs->eof)
			return (0);
		crs->eof = chars_read == 0;
		crs->buffer[chars_read] = '\0';
		crs->pos = 0;
		crs->reload = ! (chars_read > 0);
	}
	return (1);
}

char	*read_line(t_crs *crs)
{
	size_t	start;
	char	*line;
	int		n_line;

	line = NULL;
	while (1)
	{
		if (! fill_buffer(crs))
		{
			if (line)
				free(line);
			return (NULL);
		}
		if (crs->eof)
			return (line);
		start = crs->pos;
		n_line = has_n_line(crs);
		line = append_str(line, crs, start);
		if (n_line)
			return (line);
		else
			crs->reload = 1;
	}
}
