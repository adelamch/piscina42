/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:59:13 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/03 20:52:06 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int total;

	total = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		total++;
	}
	*dest = '\0';
	dest = dest - total;
	return (dest);
}
