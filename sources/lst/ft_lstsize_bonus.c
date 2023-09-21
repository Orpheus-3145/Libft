/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 02:09:55 by anonymous     #+#    #+#                 */
/*   Updated: 2023/09/21 13:08:59 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
