/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:20:05 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/09 22:12:54 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char cadena[20] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(cadena);
	return (0);
}
