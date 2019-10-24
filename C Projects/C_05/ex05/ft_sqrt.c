/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:08:15 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/21 14:43:31 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;
	int num;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (sqrt < 47000)
	{
		num = sqrt * sqrt;
		if (num == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
