/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:40:59 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/16 22:15:46 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct2.h"
#include "heather.h"

int		main(int argc, char **argv)
{
	struct s_var2	v;

	v.fd = ft_open(argv[1]);
	v.size = ft_file_size(v.fd);
	close(v.fd);
	v.fd = ft_open(argv[1]);
	v.buffer = ft_read(v.fd, v.size);
	close(v.fd);
	v.table = ft_separate_lines(v.buffer, v.size);
	v.array_of_chars = identify_characters(v.table);
	v.maximum = ft_play_game(v.table, v.array_of_chars);
	ft_print_full_c(v.table, v.array_of_chars, v.maximum);
	return (argc);
}
