/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 02:49:04 by anonymous     #+#    #+#                 */
/*   Updated: 2023/06/04 16:38:07 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void *(*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		ft_free(lst);
	}
}
