/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:04:05 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/26 13:29:26 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_dec_to_hex(long num, int ceros, long max, long count)
{
	count = num;
	if (ceros == 1)
	{
		while (count <= max)
		{
			count = count * 16;
			write(1, "0", 1);
		}
	}
	if (num >= 16)
		print_dec_to_hex(num / 16, 0, 0, 0);
	num = num % 16;
	if (num > 9)
	{
		num = num + 87;
		write(1, &num, 1);
	}
	else
	{
		num = num + 48;
		write(1, &num, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0)
		{
			write(1, "\\", 1);
			a = -str[i];
			print_dec_to_hex(a, 1, 15, 0);
		}
		else if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			print_dec_to_hex(str[i], 1, 15, 0);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
}

int	main (void)
{
	char str[1000] = "Coucou\ntu vas bien ?";
	str[8] = -27;
	ft_putstr_non_printable(str);
	return(0);
}
