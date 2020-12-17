/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:39:22 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/02 20:56:22 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int k;
	int a;
	int b;

	i = 0;
	k = 1;
	a = 0;
	b = 0;
	while (i <= (size - k))
	{
		b = *tab;
		tab = tab + size - k - i;
		a = *tab;
		*tab = b;
		tab = tab - size + k + i;
		*tab = a;
		tab++;
		i++;
		k++;
	}
}
