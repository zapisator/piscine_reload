/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 15:34:21 by ftothmur          #+#    #+#             */
/*   Updated: 2018/12/30 20:59:37 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_error(int errno)
{
	if (errno == SUCCESS)
		return (SUCCESS);
	else if (errno == NOFILES)
		ft_fputstr("File name missing.\n", STDERR_FILENO);
	else if (errno == TOO_MANY_FILES)
		ft_fputstr("Too many arguments.\n", STDERR_FILENO);
	else if (errno == NOTOPEN)
		ft_fputstr("Cannot open file.\n", STDERR_FILENO);
	else if (errno == NOTREAD)
		ft_fputstr("Cannot read file.\n", STDERR_FILENO);
	else if (errno == NOTCLOSE)
		ft_fputstr("Cannot close file.\n", STDERR_FILENO);
	return (FAILURE);
}
