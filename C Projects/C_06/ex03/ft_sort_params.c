/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:37:19 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/17 21:17:18 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void	print_argv(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc && argc != 0)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		j;
	int		compare;

	i = 1;
	while (i < argc && argc != 0)
	{
		j = i + 1;
		while (j < argc)
		{
			compare = ft_strcmp(argv[i], argv[j]);
			if (compare > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
	print_argv(argc, argv);
	return (0);
}
