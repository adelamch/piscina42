/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuatros2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:19:06 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:20:18 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cuatros2(int tab[4][4], int *lcol, int *rcol)
{
	int		i;
	char	c;

	i = 0;
	c = '0';
	while (i < 4)
	{
		if (lcol[i] == 1)
		{
			tab[i][0] = 4;
			c = tab[i][0] + '0';
			write(1, &c, 1);
		}
		if (rcol[i] == 1)
		{
			tab[i][3] = 4;
			c = tab[i][3] + '0';
			write(1, &c, 1);
		}
		i++;
	}
}
