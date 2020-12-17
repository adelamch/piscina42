# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgranado <bgranado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 19:32:24 by bgranado          #+#    #+#              #
#    Updated: 2020/12/16 19:33:48 by bgranado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = main.c function_open.c game.c print_table.c separate_lines.c
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(CLEAN) $(NAME)
fclean:
		$(CLEAN) *.o *.gch .DS_Store
norma:
		norminette
re::	
		fclean all