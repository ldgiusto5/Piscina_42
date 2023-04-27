/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:54:37 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/21 17:53:00 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 90 && str[i] < 97) || str[i] < 65 || str[i] > 122)
			a = 0;
		i++;
	}
	return (a);
}
/*
int	main (void)
{
	char	*c = "A";
	int	x;

	x = ft_str_is_alpha(c);
	printf("%i", x);
	return (0);
}
*/