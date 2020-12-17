/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:03:41 by amolina-          #+#    #+#             */
/*   Updated: 2020/11/30 20:03:51 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		maxnumber(int n)
{
	int nummax;

	if (n == 1)
		nummax = 9;
	else if (n == 2)
		nummax = 89;
	else if (n == 3)
		nummax = 789;
	else if (n == 4)
		nummax = 6789;
	else if (n == 5)
		nummax = 56789;
	else if (n == 6)
		nummax = 456789;
	else if (n == 7)
		nummax = 3456789;
	else if (n == 8)
		nummax = 23456789;
	else if (n == 9)
		nummax = 123456789;
	return (nummax);
}

void	ft_putchar1(void)
{
	char zero;

	zero = '0';
	write(1, &zero, 1);
}

void	ft_putchar2(void)
{
	char one;

	one = '1';
	write(1, &one, 1);
}

void	ft_print_combn(int n)
{
	int i;
	int nmax;

	i == 1;
	nmax = maxnumber(n);
	while (i < n)
		ft_putchar1();
		i++;
	ft_putchar2();
}
