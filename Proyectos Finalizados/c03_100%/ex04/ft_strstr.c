/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:23:55 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/29 03:18:27 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[200] = "hola iiii2 dias gente como va todo en 42 malaguita chaval?";
	char	a[200] = "hola iiii2 dias gente como va todo en 42 malaguita chaval?";
	char	src[200] = "ii2";

	printf("%s\n", ft_strstr(dest, src));
	printf("%s\n", strstr(a, src));
	return (0);
}
