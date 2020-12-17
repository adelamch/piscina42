/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:23:48 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 20:14:12 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int		n;
	char	cad1[12] = "Hello world";
	char	cad2[12] = "Hello wo";

	n = ft_strcmp(cad1, cad2);
	printf("%d", n);
	return (0);
}
