/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 20:10:13 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 21:49:41 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_full_t(char **tab, char *characters)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= (characters[0] - '0'))
	{
		while (tab[i][j] != '\0')
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

void	ft_print_full_c(char **tab, char *characters, int *array)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = array[2];
	while (i < array[0])
	{
		while (j < array[0])
		{
			tab[array[1]][array[2]] = characters[3];
			array[2]++;
			j++;
		}
		j = 0;
		array[2] = n;
		array[1]++;
		i++;
	}
	ft_print_full_t(tab, characters);
}
