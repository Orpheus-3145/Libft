/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 05:50:00 by fra           #+#    #+#                 */
/*   Updated: 2023/02/23 05:50:03 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl_pos(char *str)
{
	int	nl_pos;

	nl_pos = 0;
	while (str[nl_pos] && str[nl_pos] != '\n')
		nl_pos++;
	if (str[nl_pos] != '\n')
		nl_pos = -1;
	return (nl_pos);
}

void	shift_chars(char *str, int n_chars)
{
	int	i;

	i = 1;
	if (n_chars != -1)
	{
		while (str[n_chars + i])
		{
			str[i - 1] = str[n_chars + i];
			i++;
		}
	}
	str[i - 1] = '\0';
}

char	*append_str(char *old, char *buffer, int nl_pos)
{
	size_t	len_old;
	size_t	len_right;
	char	*new_str;

	len_old = 0;
	while (old && old[len_old])
		len_old++;
	len_right = nl_pos;
	if (nl_pos == -1)
	{
		len_right = 0;
		while (buffer[len_right])
			len_right++;
	}
	new_str = (char *) malloc((len_old + len_right + 1) * sizeof(char));
	if (new_str)
	{
		new_str[len_old + len_right] = '\0';
		while (len_right--)
			new_str[len_old + len_right] = buffer[len_right];
		while (len_old--)
			new_str[len_old] = old[len_old];
	}
	if (old)
		free(old);
	return (new_str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		buffer[BUFFER_SIZE + 1];
	ssize_t			chars_read;
	int				nl_pos;

	if (fd < 0 || read(fd, buffer, 0) == -1)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (! *buffer)
		{
			chars_read = read(fd, buffer, BUFFER_SIZE);
			if (chars_read <= 0)
			{
				if (chars_read == -1 && line)
					free(line);
				return (line);
			}
			buffer[chars_read] = '\0';
		}
		nl_pos = find_nl_pos(buffer);
		line = append_str(line, buffer, nl_pos);
		shift_chars(buffer, nl_pos);
		if (nl_pos != -1)
			return (line);
	}
}
