# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoouali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/29 20:18:16 by yoouali           #+#    #+#              #
#    Updated: 2019/03/30 17:04:07 by yoouali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Srcs = *.c
Obje = *.o
NAME = libft.a

all :$(NAME)

$(NAME):
	    gcc -Wall -Wextra -Werror -c $(Srcs)
		ar rc $(NAME) $(Obje)
clean :
	rm -f $(Obje)
fclean : clean
	rm -f $(NAME)
re : fclean all
