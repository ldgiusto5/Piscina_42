/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:45:46 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/25 18:20:14 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (a == 1)
			{
				str[i] -= 32;
				a = 0;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
			a = 0;
		else
			a = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main (void)
{
	char str[100] = "asdfhb 78bebkf 7ho234,f almç3g+ gñl426h o'wer¡'g Seg `´rf: ";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/