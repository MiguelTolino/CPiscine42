/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:01:50 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/16 19:19:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int num;

	fact = 1;
	num = nb;
	if (nb < 0)
	{
		return (0);
	}
	while (num > 0)
	{
		fact *= num;
		num--;
	}
	return (fact);
}
