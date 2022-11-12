/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 20:36:57 by anonymous     #+#    #+#                 */
/*   Updated: 2022/11/11 23:49:34 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_crs_list(t_crs **crs_lst)
{
	t_crs	*next;

	while (*crs_lst)
	{
		next = (*crs_lst)->next;
		free((*crs_lst)->buffer);
		free(*crs_lst);
		*crs_lst = next;
	}
}

t_crs	*append_crs(t_crs *list, int fd)
{
	t_crs	*new_crs;

	new_crs = allocate_cursor(fd);
	if (! new_crs)
	{
		free_crs_list(&list);
		return (NULL);
	}
	while (list->next)
		list = list->next;
	list->next = new_crs;
	return (new_crs);
}

t_crs	*get_crs_from_fd(t_crs *crs_list, int fd)
{
	t_crs	*tmp;

	tmp = crs_list;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	return (append_crs(crs_list, fd));
}

void	check_crs_to_free(t_crs **list)
{
	t_crs	*curr;
	t_crs	*prev;

	curr = *list;
	prev = *list;
	while (curr)
	{
		if (curr->eof)
		{
			if (curr == *list)
				*list = (*list)->next;
			else
				prev->next = curr->next;
			free(curr->buffer);
			free(curr);
			return ;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

char	*get_next_line(int fd)
{
	char			*line;
	t_crs			*crs;
	static t_crs	*list_crs;
	
	if (fd < 0)
	{
		free_crs_list(&list_crs);
		return (NULL);
	}
	if (! list_crs)
	{
		list_crs = allocate_cursor(fd);
		if (! list_crs)
			return (NULL);
	}
	crs = get_crs_from_fd(list_crs, fd);
	if (! crs)
		return (NULL);
	line = read_line(crs);
	if (crs->error)
		free_crs_list(&list_crs);
	else if (! line || crs->eof)
		check_crs_to_free(&list_crs);
	return (line);
}
