# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoouali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 15:03:23 by yoouali           #+#    #+#              #
#    Updated: 2019/06/14 11:29:49 by yoouali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LB = libft/libft.a 
SR = read.c stock.c sq.c solv.c main.c 
PR = Fillit

all :
	make -C libft/ re
	make -C libft/ clean
	gcc -Wall -Werror -Wextra -o $(PR) $(SR) $(LB)
	clear

