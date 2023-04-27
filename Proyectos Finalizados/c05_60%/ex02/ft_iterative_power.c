/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:38:34 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/28 23:53:32 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * num;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main (void)
{
	int	num;
	
	num = ft_iterative_power(0, 0);
	printf("%i\n",num);
	return (0);
}
*/