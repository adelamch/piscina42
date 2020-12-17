/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:44:40 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/08 17:38:00 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char cad1[12] = " Chao World";
	char cad2[24] = "Hello World";

	ft_strncat(cad2, cad1, 11);
	printf("%s", cad2);
	return (0);
}
