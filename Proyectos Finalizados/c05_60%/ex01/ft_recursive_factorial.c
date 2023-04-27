/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:25:25 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/28 23:53:08 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
		x = ft_recursive_factorial(nb - 1);
	return (x * nb);
}
/*

#include <stdio.h>

int	main (void)
{
	int	x;
	
	x = ft_recursive_factorial(-1);
	printf("%i\n", x);
	return (0);
}
*/