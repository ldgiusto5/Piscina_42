/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:58:53 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/26 16:44:13 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int array[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = array[i] + 48;
		write(1, &c, 1);
		i++;
	}
	if (array[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	ft_rec_array(int array[], int n, int i)
{
	if (i == 0)
	{
		array[i] = 0;
	}
	else
		array[i] = array[i - 1] + 1;
	while (array[i] < 11 - n + i)
	{
		if (i == n - 1)
		{
			ft_print_array(array, n);
		}
		else
		{
			ft_rec_array(array, n, i + 1);
		}
		array[i]++;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	if (n < 10 && n > 0)
	{
		ft_rec_array(array, n, 0);
	}
}
/*
int main (void)
{
	ft_print_combn(9);
	return(0);
}
*/