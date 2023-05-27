/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fra <fra@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:59:40 by faru              #+#    #+#             */
/*   Updated: 2023/05/27 19:31:16 by fra              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join_str;

	if (! s1 && ! s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (! join_str)
		return (NULL);
	else
	{
		while (s2_len--)
			join_str[s1_len + s2_len] = s2[s2_len];
		while (s1_len--)
			join_str[s1_len] = s1[s1_len];
		return (join_str);
	}
}
