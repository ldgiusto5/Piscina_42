/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:12:12 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/28 23:52:43 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	while (nb > 1)
	{
		x = x * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (x);
}
/*
#include <stdio.h>

int	main (void)
{
	int	x;
	
	x = ft_iterative_factorial(3);
	printf("%i\n", x);
	return (0);
}
*/