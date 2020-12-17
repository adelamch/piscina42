/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:57:16 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/02 22:18:34 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int i;
	int j;

	a = 0;
	i = 1;
	j = 1;
	while (i <= size)
	{
		a = *tab;
		while (j <= (size - i))
		{
			tab++;
			if (*tab < a)
			{
				a = *tab;
				*tab = *(tab - j);
				*(tab - j) = a;
			}
			j++;
		}
		tab = tab - size + i + 1;
		i++;
		j = 1;
	}
}
