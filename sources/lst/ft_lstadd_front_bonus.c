/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 00:39:23 by anonymous     #+#    #+#                 */
/*   Updated: 2023/07/12 12:37:11 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (! lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
