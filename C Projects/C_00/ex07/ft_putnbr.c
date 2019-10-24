/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:38:42 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/12 20:38:56 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int num;
	unsigned int num_inv;
	char a;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = nb * -1;
	}
	else
		num = nb;
	while (num != 0)
	{
		num_inv = num_inv * 10 + num % 10;
		num = num / 10;
	}
	while (num_inv != 0)
	{
		a = num_inv % 10 + '0';
		write(1, &a, 1);
		num_inv = num_inv / 10;
	}
}
