/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:09:58 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/26 13:23:58 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;

	x = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (x);
}

#include<stdio.h>
#include <string.h>

int	main (void)
{
	char src[] = "hola bueno dia.";
	char dest[50];
	unsigned int	a;
	
	a = ft_strlcpy(dest, src, 5);
	printf("%i\n",a);
	printf("%s\n",dest);
	a = strlcpy(dest, src, 5);
	printf("%i\n",a);
	printf("%s\n",dest);
	return (0);
}
