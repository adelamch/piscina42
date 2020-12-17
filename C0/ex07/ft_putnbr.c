/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:01:28 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/05 18:06:14 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		numcifras(int n)
{
	int total;

	total = 0;
	if (n >= 0)
	{
		if (n == 0)
			total++;
		while (n > 0)
		{
			n /= 10;
			total++;
		}
	}
	else
	{
		while (n < 0)
		{
			n /= 10;
			total++;
		}
	}
	return (total);
}

void	ft_putchar1(void)
{
	char minus;

	minus = '-';
	write(1, &minus, 1);
}

void	ft_putchar2(int n, int pot)
{
	char c;

	if (n >= 0)
		c = (n / pot) + 48;
	else if (n < 0 && n >= -2147483648)
	{
		c = ((n / pot) * (-1)) + 48;
	}
	write(1, &c, 1);
}

void	ft_putchar3(int n)
{
	char c;

	if (n >= 0)
		c = n + 48;
	else if (n < 0 && n >= -2147483648)
	{
		c = (n * (-1)) + 48;
	}
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		times;
	int		i;
	int		j;
	int		pot10;

	times = numcifras(nb);
	i = 1;
	j = 1;
	if (nb < 0 && nb >= -2147483648)
		ft_putchar1();
	while (i < times)
	{
		pot10 = 1;
		while (j < times)
		{
			pot10 *= 10;
			j++;
		}
		ft_putchar2(nb, pot10);
		nb %= pot10;
		i++;
		j = i;
	}
	ft_putchar3(nb);
}
