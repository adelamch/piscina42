/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heather.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 22:32:24 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 22:32:27 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEATHER_H
# define HEATHER_H

int		ft_open(char *argv);
int		ft_file_size(int f);
char	*ft_read(int f, int file_size);
char	**ft_separate_lines(char *buf, int file_size);
char	*identify_characters(char **tab);
int		*ft_play_game(char **tab, char *characters);
void	ft_print_full_c(char **tab, char *characters, int *array);

#endif
