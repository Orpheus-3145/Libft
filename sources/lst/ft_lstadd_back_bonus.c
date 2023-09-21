/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 02:24:13 by anonymous     #+#    #+#                 */
/*   Updated: 2023/09/21 13:08:37 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_obj;

	if (! lst)
		return ;
	if (*lst)
	{
		last_obj = ft_lstlast(*lst);
		if (last_obj)
			last_obj->next = new;
	}
	else
		*lst = new;
}
