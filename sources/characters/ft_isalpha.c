/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:29:19 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 13:07:48 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
