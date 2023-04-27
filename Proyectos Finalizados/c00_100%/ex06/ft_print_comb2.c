/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:32:41 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/14 15:34:28 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int_xx(int u)
{
	int	d;

	d = 0;
	while (u >= 10)
	{
		u = u - 10;
		d++;
	}
	d = d + 48;
	u = u + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	nd;
	int	ni;

	ni = 0;
	while (ni < 99)
	{
		nd = ni + 1;
		while (nd < 100)
		{
			ft_print_int_xx(ni);
			write(1, " ", 1);
			ft_print_int_xx(nd);
			if (ni != 98 || nd != 99)
			{
				write(1, ", ", 2);
			}
			nd++;
		}
		ni++;
	}
}
