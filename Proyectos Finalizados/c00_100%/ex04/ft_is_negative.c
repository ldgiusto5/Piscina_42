/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:46 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/14 15:34:47 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ans;

	ans = 'P';
	if (n < 0)
	{
		ans = 'N';
	}
	write(1, &ans, 1);
}
/*
int	main(void)
{
	ft_is_negative(-70);
	return (0);
}
*/