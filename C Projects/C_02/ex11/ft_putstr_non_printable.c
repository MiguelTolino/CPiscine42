/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 06:20:31 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/10 11:07:40 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
	char hex[2];
	char aux;

	i=0;
	while (*(str+i) != '\0')
	{
		if (*(str+i) < 32 || *(str+i) == 127)
		{
			write(1,"\\",1);
			hex[0]=*(str+i) % 16;
			aux = *(str + i) / 16;	
			hex[1]=aux % 16;
			*(hex+1)=*(hex+1);
			aux = aux / 16;	
			write(1,&hex[1],1);
			write(1,&hex[0],1);
		}
		else
		{
		write(1,&str[i],1);
		}
		i++;
	}
}
