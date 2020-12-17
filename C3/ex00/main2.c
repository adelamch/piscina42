/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 20:14:33 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 20:15:46 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	int		n;
	char	cad1[12] = "Hello world";
	char	cad2[12] = "Hello wo";

	n = strcmp(cad1, cad2);
	printf("%d", n);
	return (0);
}
