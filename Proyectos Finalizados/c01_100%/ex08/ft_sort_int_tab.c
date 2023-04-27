/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:58:54 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/16 11:44:32 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	savenum1;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			j = i + 1;
			while (j > 0)
			{
				if (tab[j] < tab[j - 1])
				{
					savenum1 = tab[j - 1];
					tab[j - 1] = tab[j];
					tab[j] = savenum1;
				}
				j--;
			}
		}
		i++;
	}
}
