/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 13:02:36 by ftothmur          #+#    #+#             */
/*   Updated: 2018/12/30 17:59:08 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <sys/types.h>
#include <stddef.h>

void	*malloc(size_t size);

int		*ft_range(int min, int max)
{
	int			*range;
	long long	len;

	range = NULL;
	if ((min == INT_MAX) || (min >= max))
		return (range);
	len = (long long)(max - min);
	range = (int *)malloc(sizeof(*range) * len);
	while (len > 0)
	{
		range[--len] = --max;
	}
	return (range);
}
