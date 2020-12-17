/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:42:38 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 18:52:04 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char cadena[80] = "salUt, comMent tu vas ? 42Mots qUaraNte-deux; cinquante+eT+un";

	ft_strcapitalize(cadena);
	printf("%s", cadena);
	return (0);
}
