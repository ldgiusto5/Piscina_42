/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:28:22 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/29 03:32:13 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **argv, int argc, int i)
{
	char	*savestring;
	int		j;

	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			j = i + 1;
			while (j > 1)
			{
				if (ft_strcmp(argv[j], argv[j - 1]) < 0)
				{
					savestring = argv[j - 1];
					argv[j - 1] = argv[j];
					argv[j] = savestring;
				}
				j--;
			}
		}
		i++;
	}
}

void	ft_print_programs(char *str)
{
	int		i;
	char	letra;

	i = 0;
	while (str[i] != 0)
	{
		letra = str[i];
		write (1, &letra, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_params(argv, argc, i);
	while (i < argc)
	{
		ft_print_programs(argv[i]);
		i++;
	}
	return (0);
}
