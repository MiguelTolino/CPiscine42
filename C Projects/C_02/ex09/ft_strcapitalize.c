/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 03:00:37 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/12 14:13:12 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowertoupper_case(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		if (*(str - 1) < '0' || *(str - 1) > '9')
			if (*(str - 1) < 'A' || *(str - 1) > 'Z')
				if (*(str - 1) < 'a' || *(str - 1) > 'z')
					*str = *str - 32;
}

void	uppertolower_case(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		if (*(str - 1) >= 'a' || *(str - 1) <= 'z')
			if (*(str - 1) >= '0' || *(str - 1) > '9')
				*str = *str + 32;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		lowertoupper_case(str + i);
		uppertolower_case(str + i);
		i++;
	}
	return (str);
}
