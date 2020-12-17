/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:18:35 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/14 20:17:48 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			cad1[24] = "Hello World";
	char			cad2[12] = " Chao World";
	unsigned int	n;

	n = ft_strlcat(cad1, cad2, 0);
	printf("%d\n", n);
	printf("%s", cad1);
	return (0);
}
