/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:25:33 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/27 03:55:44 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_params(char *str)
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
	while (1 < argc)
	{
		ft_rev_params(argv[argc - 1]);
		argc--;
	}
	return (0);
}
