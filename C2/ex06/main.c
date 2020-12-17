/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:01:54 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 17:04:22 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char	cadena[12] = "-)>?1Ah";
	int		n;

	n = ft_str_is_printable(cadena);
	printf("%d", n);
	return (0);
}
