/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:42:26 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/16 16:55:52 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n <= 0)
		return (0);
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && *(s2 + i) && i < n - 1)
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}