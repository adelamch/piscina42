/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:04:21 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/10 18:53:48 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	hexadecimal(unsigned char c)
{
	unsigned char a;
	unsigned char b;

	a = c / 16;
	b = c % 16;
	if (a >= 10)
		ft_putchar(a + 87);
	else
		ft_putchar(a + '0');
	if (b >= 10)
		ft_putchar(b + 87);
	else
		ft_putchar(b + '0');
}

void			ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = 92;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, &c, 1);
			hexadecimal((unsigned char)str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
