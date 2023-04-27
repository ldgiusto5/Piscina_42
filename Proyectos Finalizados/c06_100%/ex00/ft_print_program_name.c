/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:10:37 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/27 15:54:16 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_program_name(char *str)
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
	if (argc != 0)
	{
		ft_print_program_name(argv[0]);
	}
	return (0);
}
