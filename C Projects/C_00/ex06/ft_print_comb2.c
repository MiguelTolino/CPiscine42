/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 11:53:18 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/08 20:37:19 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	if (!(a == c && b == d) && (a <= c && b <= d))
	{
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
		}
		else
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	recorrido(char n1, char n2, char n3, char n4)
{
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				while (n4 <= '9')
				{
					print(n1, n2, n3, n4);
					n4++;
				}
				n4 = '0';
				n3++;
			}
			n3 = '0';
			n2++;
		}
		n2 = '0';
		n1++;
	}
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	recorrido(n1, n2, n3, n4);
}
