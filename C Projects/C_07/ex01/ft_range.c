/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:48:42 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/24 19:52:19 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(array + i) = min;
		min++;
		i++;
	}
	return (array);
}
