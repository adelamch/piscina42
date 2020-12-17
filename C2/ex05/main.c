/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:52:08 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 14:55:02 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char	cadena[12] = "HELLOWORLD";
	int		n;

	n = ft_str_is_uppercase(cadena);
	printf("%d", n);
	return (0);
}
