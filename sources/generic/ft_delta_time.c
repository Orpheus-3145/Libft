/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_delta_time.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 11:37:18 by faru          #+#    #+#                 */
/*   Updated: 2023/07/23 15:11:58 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_delta_time(t_timeval t1, t_timeval t2)
{
	t_timeval	delta;
	double		timestamp;

	while ((t2.tv_usec < t1.tv_usec) && (t2.tv_sec > t1.tv_sec))
	{
		t2.tv_usec += 1000000;
		t2.tv_sec -= 1;
	}
	delta.tv_sec = t2.tv_sec - t1.tv_sec;
	delta.tv_usec = t2.tv_usec - t1.tv_usec;
	timestamp = delta.tv_sec * 1000000 + delta.tv_usec;
	return (timestamp / 1000.);
}
