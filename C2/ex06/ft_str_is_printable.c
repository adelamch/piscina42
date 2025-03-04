/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:59:01 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 17:01:47 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int n;
	int i;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			n = 0;
		i++;
	}
	return (n);
}
