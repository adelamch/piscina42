/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:15:58 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/05 17:54:33 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(int n, char c, int m)
{
	char a;
	char b;
	char d;
	char e;

	a = n / 10 + '0';
	b = n % 10 + '0';
	d = m / 10 + '0';
	e = m % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_putchar2(char d, char e)
{
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 00;
	num2 = 01;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			ft_putchar1(num1, ' ', num2);
			if (num1 != 98 || num2 != 99)
				ft_putchar2(',', ' ');
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
