/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:54:02 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 16:58:37 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char cad1[12] = "Hello World";
	char cad2[12];

	ft_strncpy(cad2, cad1, 9);
	printf("La cadena copiada es: %s", cad2);
	return (0);
}
