/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:13:18 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/14 15:34:59 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i < 123)
	{
		write(1, &i, 1);
		i = i + 1;
	}
}
/*
int main (void)
{
    ft_print_alphabet();
}
*/