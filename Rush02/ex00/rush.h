/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:16:19 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/13 20:19:13 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

struct dictionary
{
	int		key;
	char	*value;
};

void    ft_errors(int argc, char **argv);
int		ft_atoi(char *str);

#endif
