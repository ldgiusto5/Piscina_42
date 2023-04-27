/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:59:34 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/16 11:44:28 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	savenum1;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		savenum1 = tab[size - 1 - i];
		tab[size - i - 1] = tab[i];
		tab[i] = savenum1;
		i++;
	}
}
