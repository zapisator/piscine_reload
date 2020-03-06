/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:13:33 by ftothmur          #+#    #+#             */
/*   Updated: 2018/11/23 17:19:56 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if ((nb < 13) && (nb > 0))
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
