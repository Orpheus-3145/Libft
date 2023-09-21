/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 02:09:55 by anonymous     #+#    #+#                 */
/*   Updated: 2023/09/21 12:58:18 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	if (lst)
		cnt = 1;
	else
		return (0);
	while (lst->next)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}
