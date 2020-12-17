/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_open.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:44:02 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 22:31:47 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_open(char *argv)
{
	int fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error when opening the file", 28);
		return (-1);
	}
	else
		return (fd);
}

int		ft_file_size(int f)
{
	int		size;
	char	*p;

	size = 0;
	while (read(f, &p, 1))
		size++;
	return (size);
}

char	*ft_read(int f, int file_size)
{
	char	*buffer;
	int		i;

	buffer = malloc((file_size + 1) * sizeof(char));
	i = 0;
	while (read(f, &buffer[i], 1))
		i++;
	buffer[i] = '\0';
	return (buffer);
}
