/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 03:05:44 by anonymous     #+#    #+#                 */
/*   Updated: 2023/09/21 12:57:16 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstclear(t_list **lst, void *(*del)(void *))
{
	t_list	*next_to_drop;
	t_list	*to_drop;

	if (! lst || ! del || ! lst)
		return (NULL);
	to_drop = *lst;
	while (to_drop)
	{
		next_to_drop = (to_drop)->next;
		ft_lstdelone(to_drop, del);
		to_drop = next_to_drop;
	}
	*lst = NULL;
	return (NULL);
}
