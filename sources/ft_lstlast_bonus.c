/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 02:15:39 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/11 12:17:38 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (! lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	char v1 = 'a', v2 = 'b', v3 = 'c', v4 = 'd';
	char *p1 = &v1, *p2 = &v2, *p3 = &v3, *p4 = &v4;
	t_list *first, *second, *third, *fourth;
	first = (t_list *) malloc(sizeof(t_list));
	second = (t_list *) malloc(sizeof(t_list));
	third = (t_list *) malloc(sizeof(t_list));
	fourth = (t_list *) malloc(sizeof(t_list));
	first->content = p1;
	first->next = second;
	second->content = p2;   
	second->next = third;
	third->content = p3;
	third->next = fourth;
	fourth->content = p4;
	fourth->next = NULL;
	t_list *last_one = ft_lstlast(first);
	printf("ultimo: %c", *((char *)(last_one->content)));
	return(0);
}
*/