/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:09:10 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/27 19:04:17 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_count_spa(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_countsign(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
		{
			count++;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}
		else
			return (-1);
	}
	return (count);
}

int	ft_find_number(char *str, int i)
{
	int	j;
	int	num;

	j = 0;
	num = 0;
	while (str[i] != '\0' && j == 0)
	{
		while (str[i] <= '9' && str[i] >= '0')
		{
			num = num * 10 + (str[i] - 48);
			i++;
			j = 1;
		}
		i++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = ft_count_spa(str);
	sign = ft_countsign(str, i);
	num = ft_find_number(str, i);
	if (sign == -1)
		return (0);
	else if (sign % 2 == 1)
		num = -num;
	return (num);
}
/*
#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	printf("%i\n", ft_atoi("    		--+a-+-+-1234567"));
	printf("%i\n", atoi("-1234ab567"));
	return (0);
}
*/