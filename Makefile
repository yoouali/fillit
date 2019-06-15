# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoouali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/15 12:27:36 by yoouali           #+#    #+#              #
#    Updated: 2019/06/15 13:06:58 by yoouali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LB = libft/libft.a
SR = main.c read.c stock.c sq.c solv.c
FI = Fillit

NAME = make -C libft
	   gcc -Wall -Wextra -Werror -o $(FI) $(SR) $(LB)
all : 
	$(NAME)
clean :
	make -C libft clean
fclean : clean
	make -C libft fclean
	rm -f $(FI)
re : fclean all
