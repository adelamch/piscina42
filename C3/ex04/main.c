/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:51:54 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 19:28:00 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char cad1[12] = "Hello World";
	char cad2[4] = "";
	char *c;

	c = ft_strstr(cad1, cad2);
	printf("%s", c);
	return (0);
}
