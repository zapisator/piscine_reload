/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:02:24 by ftothmur          #+#    #+#             */
/*   Updated: 2018/11/23 15:59:52 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if ((nb < 13) && (nb > 0))
	{
		i = nb;
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
	else
		return (0);
}
