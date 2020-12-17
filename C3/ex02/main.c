/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:26:30 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/08 17:37:12 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char cad1[12] = " Chao World";
	char cad2[24] = "Hello World";

	ft_strcat(cad2, cad1);
	printf("%s", cad2);
	return (0);
}
