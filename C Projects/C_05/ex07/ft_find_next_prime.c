/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:20:49 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/22 18:53:59 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int num;

	num = 2;
	if (nb <= 1)
		return (0);
	while (num <= nb / num)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int primo;

	primo = nb;
	if (nb <= 1)
		return (2);
	while (ft_is_prime(primo) == 0)
		primo++;
	return (primo);
}
