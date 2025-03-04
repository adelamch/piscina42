/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:29:13 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/07 18:52:02 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 65 || (str[i - 1] > 90 && str[i - 1] < 97) ||
			str[i - 1] > 122) && (str[i - 1] < 48 || str[i - 1] > 57) &&
				(str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (((str[i - 1] >= 48 && str[i - 1] <= 57) || (str[i - 1] >= 65 &&
			str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i - 1] <= 122)) &&
				(str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
