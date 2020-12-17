/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 21:17:26 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/14 20:17:52 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			cad1[24] = "Hello World";
	char			cad2[12] = " Chao World";
	unsigned int	n;

	n = strlcat(cad1, cad2, 0);
	printf("%d\n", n);
	printf("%s", cad1);
	return (0);
}
