/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:03:57 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/03 20:45:11 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char cadena1[12] = "Hello World";
	char cadena2[12];

	cadena2[0] = *ft_strcpy(&cadena2[0], &cadena1[0]);
	printf("%s", cadena2);
	return (0);
}
