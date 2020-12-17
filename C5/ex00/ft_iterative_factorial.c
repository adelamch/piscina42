/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:39:15 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/15 17:47:09 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = nb;
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	else
	{
		while (n > 1)
		{
			nb = nb * (n - 1);
			n--;
		}
	}
	return (nb);
}
