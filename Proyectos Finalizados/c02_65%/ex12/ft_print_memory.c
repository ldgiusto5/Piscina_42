/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-gius <ldi-gius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:55:07 by ldi-gius          #+#    #+#             */
/*   Updated: 2023/03/26 13:36:57 by ldi-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_dec_to_hex(long num, int ceros, long max, long count)
{
	count = num;
	if (count == 0)
		count = 1;
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

void	print_end(int size, char *letra, int b, char a)
{
	int	i;

	i = 0;
	b = size % 16;
	if (b != 0)
	{
		while (i < 16 - b)
		{
			write(1, "  ", 2);
			if (i % 2 == 0)
				write(1, " ", 1);
			i++;
		}
		i = 0;
	}
	else if (b == 0)
		b = 16;
	while (i < b)
	{
		a = letra[size - b + i];
		write(1, &a, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_string(int i, int j, int size, char *letra)
{
	int	a;

	if (i % 2 == 0)
		write(1, " ", 1);
	if (i % 16 == 0 || i == size)
	{
		i--;
		if (i == size - 1)
			print_end(size, letra, 0, 0);
		else
		{
			while (j < 16 && i < size)
			{
				a = letra[i - 15 + j];
				write(1, &a, 1);
				j++;
			}
			write(1, "\n", 1);
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	long			dir;
	char			*letra;
	char			a;

	i = 0;
	letra = addr;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			write(1, "0000", 4);
			dir = (long) &addr[i];
			print_dec_to_hex(dir, 1, 17592186044415, 0);
			write(1, ": ", 2);
		}
		if (letra[i] < 32 || letra[i] == 127)
			letra[i] = '.';
		a = letra[i];
		print_dec_to_hex(a, 1, 15, 0);
		print_string(i, 0, size, letra);
		i++;
		
	}
	return (addr);
}

int	main (void)
{
	char str[100] = "123456789012345678901234567890";
	ft_print_memory(str, 30);
	return(0);
}
