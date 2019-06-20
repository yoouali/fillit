# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoouali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/15 12:27:36 by yoouali           #+#    #+#              #
#    Updated: 2019/06/20 22:06:24 by akhossan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LB = libft/libft.a
SR = fillit_project/srcs/main.c fillit_project/srcs/read.c fillit_project/srcs/stock.c fillit_project/srcs/sq.c fillit_project/srcs/solv.c
OB = main.o read.o stock.o sq.o solv.o
NAME = fillit

all : $(NAME)
$(NAME) :
	@make -C libft all
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SR) $(LB)
clean :
	@make -C libft clean
	@rm -f $(OB)
fclean : clean
	@make -C libft fclean
	@rm -f $(NAME)
re : fclean all
