/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 23:53:44 by anonymous     #+#    #+#                 */
/*   Updated: 2023/09/21 12:58:18 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_obj;

	new_obj = ft_calloc(1, sizeof(t_list));
	if (new_obj == NULL)
		return (NULL);
	if (! content)
		new_obj->content = NULL;
	else
		new_obj->content = content;
	new_obj->next = NULL;
	return (new_obj);
}
