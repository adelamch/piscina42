# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 16:22:01 by alogarci          #+#    #+#              #
#    Updated: 2020/12/13 20:21:21 by amolina-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SRCS = main.c ft_atoi.c ft_errors.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
CLEAN = rm -f
CC = cc

all:	$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
	$(CLEAN) $(NAME)
fclean: 	clean
	$(CLEAN) $(OBJ)
norma:
	norminette -R CheckforbiddenSourceHeader
