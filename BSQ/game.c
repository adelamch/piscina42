/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:11:13 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 22:06:44 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "struct1.h"

int		shorten_size_of_table(char **tab, char *characters, int a, int b)
{
	int count;
	int k;

	count = 1;
	k = 1;
	while (tab[a + 1][b] != '\0' && tab[a + 1][b] == characters[1] &&
		b < count + 1)
	{
		b++;
		k++;
	}
	b = 0;
	while (tab[a][b + 1] != '\0' && a < count + 1)
	{
		a++;
		k++;
	}
	return (k);
}

int		size_of_table(char **tab, char *characters, int a, int b)
{
	int count;
	int k;
	int n;

	count = 1;
	k = 1;
	n = k;
	while (a <= (characters[0] - '0'))
	{
		while (tab[a][b] != '\0')
		{
			k = shorten_size_of_table(tab, characters, a, b);
			if (k - 3 == n)
			{
				n = k - 1;
				k = 1;
				count++;
				b = b + count;
			}
			else
				return (count + 2);
		}
		a++;
	}
	return (count);
}

int		*ft_play_game(char **tab, char *characters)
{
	struct s_var1	v;

	v.i = 1;
	v.j = 0;
	v.array = (int*)malloc(sizeof(int) * 3);
	v.array[0] = 0;
	while (v.i < (characters[0] - '0'))
	{
		while (tab[v.i][v.j] != '\0')
		{
			if (tab[v.i][v.j] == characters[1])
			{
				if (size_of_table(tab, characters, v.i, v.j) > v.array[0])
				{
					v.array[0] = size_of_table(tab, characters, v.i, v.j);
					v.array[1] = v.i;
					v.array[2] = v.j;
				}
			}
			v.j = v.j + v.array[0];
		}
		v.i++;
		v.j = 0;
	}
	return (v.array);
}
