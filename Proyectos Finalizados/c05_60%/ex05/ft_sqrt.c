/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:57:42 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/29 22:18:18 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}

#include <stdio.h>

int	main (void)
{
	int	num;
	
	num = ft_sqrt(2147483647);
	printf("%i\n",num);
	return (0);
}
