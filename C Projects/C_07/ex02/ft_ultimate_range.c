/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:07:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/24 20:07:34 by mmateo-t         ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = ft_range(min, max);
	i = strlen(range);

	return (i);
}
