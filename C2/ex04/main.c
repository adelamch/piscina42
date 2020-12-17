/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:45:25 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 14:48:53 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char	cadena[12] = "helloworld";
	int		n;

	n = ft_str_is_lowercase(cadena);
	printf("%d", n);
	return (0);
}
