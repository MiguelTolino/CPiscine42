/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:47:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/24 13:15:25 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *string;

	string = malloc(sizeof(char) * (size + ft_strlen(sep)));
	if (size <= 0)
	{
		free(string);
		return (string);
	}
	int i;
	int j;

	i = 0;
	while (string[i])
	{
		j = 0;
		while(strs[i][j])
		{	string[i] = strs[i][j];
			j++;
		}
		j = 0;
		while(sep[j])
		{
			string[i] = sep[j];
			j++;
		}
		i++;
	}
	return (string);
}
