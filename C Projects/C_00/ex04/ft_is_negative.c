/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 10:40:51 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/07 19:54:55 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char negative;
	char positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}
