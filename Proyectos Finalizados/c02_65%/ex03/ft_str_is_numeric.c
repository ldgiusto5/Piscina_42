/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:53:08 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/21 17:54:05 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			a = 0;
		i++;
	}
	return (a);
}
/*
int	main (void)
{
	char	*c = ".";
	int	x;

	x = ft_str_is_numeric(c);
	printf("%i", x);
	return (0);
}
*/