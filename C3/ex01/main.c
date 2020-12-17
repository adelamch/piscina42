/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:20:08 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 22:44:23 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	cad1[12] = "haola";
	char	cad2[12] = "hol";
	int n;

	n = ft_strncmp(cad1, cad2, 10);
	printf("%d", n);
	return (0);
}
