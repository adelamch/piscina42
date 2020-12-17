/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:31:49 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 20:41:00 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**ft_separate_lines(char *buf, int file_size)
{
	int		i;
	int		j;
	int		k;
	char	**table;

	i = 0;
	j = 0;
	k = 0;
	table = (char**)malloc(sizeof(char*) * (file_size + 1));
	while (buf[i] != '\0')
	{
		table[j] = (char*)malloc(sizeof(char) * file_size);
		while (buf[i] != '\n')
		{
			table[j][k] = buf[i];
			i++;
			k++;
		}
		table[j][k] = '\0';
		k = 0;
		j++;
		i++;
	}
	return (table);
}

char	*identify_characters(char **tab)
{
	char	*special_characters;
	int		i;

	special_characters = malloc(sizeof(char) * 5);
	i = 0;
	while (tab[0][i] != '\0')
	{
		special_characters[i] = tab[0][i];
		i++;
	}
	return (special_characters);
}
