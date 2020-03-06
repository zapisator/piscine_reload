/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:38:05 by ftothmur          #+#    #+#             */
/*   Updated: 2018/12/30 17:56:25 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*malloc(size_t sizemem);

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	cpy = NULL;
	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(*cpy) * (len + 1));
	if (cpy)
		ft_strcpy(cpy, src);
	return (cpy);
}
