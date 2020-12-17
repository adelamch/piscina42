/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:24:10 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/13 20:14:04 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "rush.h"

int		ft_atoi(char *str);

typedef struct dictionary dict;

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *dest, char src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src;
	dest[i + 1] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int total;

	total = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		total++;
	}
	*dest = '\0';
	dest = dest - total;
	return (dest);
}

dict	*line(char **array_of_lines)
{	
	dict    *reference;
	char	*cad;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	reference = (dict*)malloc(sizeof(dict)*1000000);
	cad = (char*)malloc(sizeof(char)*1000000);
    cad[0] = '\0';
	while (array_of_lines)
	{
		while (array_of_lines[i][j] != ':')
		{
			cad = ft_strcat(cad, array_of_lines[i][j]);
			j++;
		}
		cad = ft_strcat(cad, '\0');
		reference[k].key = ft_atoi(cad);
		cad = ft_strcpy(cad, "");
		j++;
		while (array_of_lines[i][j] != '\0')
		{
			cad = ft_strcat(cad, array_of_lines[i][j]);
			j++;
		}
		cad = ft_strcat(cad, '\0');
		reference[k].value = cad;
		k++;
	}
	return (reference);
}

char	**split(char *buffer)
{
	int		i;
	int		k;
	int		a;
	char	**array_of_chars;
    
	i = 0;
	k = 0;
	a = 0;
	array_of_chars = (char**)malloc(sizeof(char)*1000000);
	while (buffer[i] != '\0')
	{
		while(buffer[i] != '\n')
		{
			array_of_chars[a] = ft_strcat(array_of_chars[a], buffer[i]);
			i++;
		}
		array_of_chars[a] = ft_strcat(array_of_chars[a], '\0');
		a++;
		k++;
		i++;
	}
	array_of_chars[a] = array_of_chars[a] - k;
	return (array_of_chars);
}

int		*ft_separate(char *argv)
{
	int n;
	int digits;
	int *separations;
	int pot;
	int i;
	int k;

	n = ft_atoi(argv);
	digits = 0;
	pot = 1;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		digits++; 
	}
	separations = (int*)malloc(sizeof(int)*1000000);
	k = digits + 1;
	n = ft_atoi(argv);
	while (n > 0)
	{
		k--;
		digits = k;
		while(digits > 1)
		{
			pot = pot * 10;
			digits--;
		}
		n = n / pot;
		separations[i] = n * pot;
		n = ft_atoi(argv);
		n = n % pot;
		pot = 1;
	}
	return (separations);
}

int		main(int argc, char **argv)
{
	int					fd;
	int					i;
	int 				j;
	int					k;
	static char			buf[1000000];
	char				**array;
	int					*vector;
	dict				*structure;

	if (argc < 2)
		write(1, "Error, too few arguments\n", 25);
	fd = open("numbers.dict", O_RDONLY);
	i = 0;
	j = 0;
	k = 0;
	array = (char**)malloc(sizeof(char)*1000000);
	vector = (int*)malloc(sizeof(int)*1000000);
	structure = (dict*)malloc(sizeof(dict)*1000000);
	if (fd == -1)
		write(1, "Error al abrir el archivo\n", 26);
	else
	{
		read(fd, buf, 1000000);
		array = split(buf);
		vector = ft_separate(argv[1]);
		while (vector)
		{
			structure = line(array);
			while (structure)
			{
				if (structure[k].key == vector[i])
				{
					while (structure[k].value[j] != '\0')
					{
						ft_putchar(structure[k].value[j]);
						j++;
					}
					j = 0;
					write (1, " ", 1);
				}
				k++;
			}
			i++;
		}
	}
	return (0);
}
