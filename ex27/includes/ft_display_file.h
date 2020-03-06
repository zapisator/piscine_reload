/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 15:17:33 by ftothmur          #+#    #+#             */
/*   Updated: 2018/12/30 20:51:22 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

/*
** 		<unistd.h>:		read, write, close, STDERR_FILENO, STDOUT_FILENO,
**						STDIN_FILENO
**		<sys/types.h>: 	ssize_t, size_t
**		<fcntl.h>:		open, file control options
*/
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>

/*
**		ONEARG:			only one argument, argc == 2
**
** 		defines:		ft_error.c
** 		NOFILES:		argc < ONEARG
**		TOO_MANY_FILES:	argc > ONEARG
** 		NOTOPEN:		fd < EXIT_SUCCESS
** 		NOTREAD:		read(fd) == -1
** 		NOTCLOSE:		close(fd) != 0
*/
# define SUCCESS		0
# define FAILURE		(-1)
# define ONEARG			2
# define NOFILES		1
# define TOO_MANY_FILES	2
# define NOTOPEN		3
# define NOTREAD		4
# define NOTCLOSE		5

/*
**		BUFSIZE			optimum I/O blocksize $>: stat -f %k filename
*/
# define BUFSIZE		4096

int		open(const char *filename, int access, ...);
int		close(int fd);
ssize_t	read(int fd, void *buf, size_t count);
ssize_t	write(int fildes, const void *buf, size_t nbytes);

int		ft_error(int errno);
void	ft_fputstr(char *str, int fd);
void	ft_fputchar(char c, int fd);

#endif
