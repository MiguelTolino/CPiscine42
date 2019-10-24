/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:52:17 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/18 13:44:48 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_negative(int negativo)
{
	if (negativo % 2 == 1)
		return (-1);
	else
		return (1);
}

int		count_negatives(char *str, int i)
{
	int negativo;

	negativo = 0;
	if (*(str + i) == '-')
	{
		negativo++;
	}
	return (negativo);
}

int		ft_atoi(char *str)
{
	int num;
	int i;
	int negativo;

	num = 0;
	i = 0;
	negativo = 0;
	while ((*(str + i) == '\t' || *(str + i) == '\n' ||
				*(str + i) == '\f' || *(str + i) == '\v' || *(str + i) == '\r'
				|| *(str + i) == ' '))
		i++;
	while ((*(str + i) == '+' || *(str + i) == '-'))
	{
		negativo += count_negatives(str, i);
		i++;
	}
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + *(str + i) - '0';
		i++;
	}
	num = num * is_negative(negativo);
	return (num);
}
