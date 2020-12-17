/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:49:35 by amolina-          #+#    #+#             */
/*   Updated: 2020/11/30 15:14:38 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchar2(char d, char e)
{
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	char c1;
	char c2;
	char c3;

	c1 = '0';
	c2 = '1';
	c3 = '2';
	while (c1 <= '7')
	{
		while (c2 <= '8')
		{
			while (c3 <= '9')
			{
				ft_putchar(c1, c2, c3);
				if (c1 != '7' || c2 != '8' || c3 != '9')
					ft_putchar2(',', ' ');
				c3++;
			}
			c2++;
			c3 = c2 + 1;
		}
		c1++;
		c2 = c1 + 1;
		c3 = c2 + 1;
	}
}
