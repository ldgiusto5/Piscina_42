/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:10:37 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/27 15:56:08 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
	while (i < argc)
	{
		ft_print_programs(argv[i]);
		i++;
	}
	return (0);
}
