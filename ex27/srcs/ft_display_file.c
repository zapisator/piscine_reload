/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 14:40:48 by ftothmur          #+#    #+#             */
/*   Updated: 2018/12/30 20:41:06 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	ssize_t	snippet;
	char	buffer[BUFSIZE + 1];

	if (argc < ONEARG)
		return (ft_error(NOFILES));
	if (argc > ONEARG)
		return (ft_error(TOO_MANY_FILES));
	fd = open(argv[ONEARG - 1], O_RDONLY);
	if (fd < SUCCESS)
		return (ft_error(NOTOPEN));
	while ((snippet = read(fd, buffer, BUFSIZE)) > SUCCESS)
	{
		buffer[snippet] = '\0';
		ft_fputstr(buffer, STDOUT_FILENO);
	}
	if (snippet < SUCCESS)
		return (ft_error(NOTREAD));
	if (close(fd) != SUCCESS)
		return (ft_error(NOTCLOSE));
	return (ft_error(SUCCESS));
}
