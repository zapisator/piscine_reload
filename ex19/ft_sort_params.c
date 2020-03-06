/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:46:05 by ftothmur          #+#    #+#             */
/*   Updated: 2018/11/25 19:38:43 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ssize_t	write(int fd, const void *buf, size_t nbyte);

void	ft_putchar(char c);

void	ft_swap_char(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (i <= argc - 1)
		{
			j = 1;
			while (j <= argc - 1)
			{
				if (ft_strcmp(argv[i], argv[j]) < 0)
					ft_swap_char(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
