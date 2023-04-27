/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:59:11 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/21 18:35:49 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			a = 0;
		i++;
	}
	return (a);
}
/*
int	main (void)
{
	char	*c = "";
	int	x;

	x = ft_str_is_lowercase(c);
	printf("%i", x);
	return (0);
}
*/