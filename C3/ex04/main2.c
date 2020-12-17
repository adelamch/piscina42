/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 20:35:44 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 20:55:28 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char cad1[12] = "Hello World";
	char cad2[4] = "ox";
	char *c;

	c = strstr(cad1, cad2);
	printf("%s", c);
	return (0);
}
