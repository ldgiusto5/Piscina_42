/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:14:57 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/29 00:01:35 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	else if (nb < 4)
		return (1);
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main (void)
{
	int	num;
	int numeros = -5;
	while (numeros < 100)
	{
		num = ft_is_prime(numeros);
		if (num == 1)
		{
			printf("%i ",numeros);
			printf("%i\n",num);
		}
		numeros++;
	}

	return (0);
}
*/