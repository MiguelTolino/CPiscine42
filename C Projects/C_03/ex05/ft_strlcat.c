/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:17:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/17 12:55:04 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		size_array(char *array)
{
	unsigned int i;

	i = 0;
	while (*(array + i))
	{
		i++;
	}
	return (i);
}

char				*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = size_array(dest);
	while (src[j + 1] != '\0' && j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
