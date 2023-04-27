/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:01:53 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/21 17:57:20 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			a = 0;
		i++;
	}
	return (a);
}
/*
int	main (void)
{
	char	*c = "@";
	int	x;

	x = ft_str_is_uppercase(c);
	printf("%i", x);
	return (0);
}
*/