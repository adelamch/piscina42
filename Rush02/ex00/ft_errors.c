/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:28:34 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 20:22:30 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_errors(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("Error, too few arguments\n");
	}
	else if (argv[1][0] == '-')
	{
		ft_putstr("Error\n");
	}
}