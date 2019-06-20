# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoouali <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/29 20:18:16 by yoouali           #+#    #+#              #
#    Updated: 2019/06/20 21:24:28 by akhossan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Srcs = ft_lst_white_spaces.c ft_memdel.c ft_putstr2.c ft_striteri.c ft_strrchr.c ft_lstadd.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strsplit.c ft_atoi.c ft_lstdel.c ft_memset.c ft_split_white_spaces.c ft_strlcat.c ft_strstr.c ft_bzero.c ft_lstdelone.c ft_putchar.c ft_strcat.c ft_strlen.c ft_strsub.c ft_countint.c ft_lstiter.c ft_putchar_fd.c ft_strchr.c ft_strmap.c ft_strtrim.c ft_countword.c ft_lstmap.c ft_putendl.c ft_strclr.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_lstnew.c ft_putendl_fd.c ft_strcmp.c ft_strncat.c ft_toupper.c ft_isalpha.c ft_memalloc.c ft_putlst.c ft_strcpy.c ft_strncmp.c ft_isascii.c ft_memccpy.c ft_putnbr.c ft_strdel.c ft_strncpy.c ft_isdigit.c ft_memchr.c ft_putnbr_fd.c ft_strdup.c ft_strnequ.c ft_isprint.c ft_memcmp.c ft_putnstr.c ft_strequ.c ft_strnew.c ft_itoa.c ft_memcpy.c ft_putstr.c ft_striter.c ft_strnstr.c
Obje = ft_lst_white_spaces.o ft_memdel.o ft_putstr2.o ft_striteri.o ft_strrchr.o ft_lstadd.o ft_memmove.o ft_putstr_fd.o ft_strjoin.o ft_strsplit.o ft_atoi.o ft_lstdel.o ft_memset.o ft_split_white_spaces.o ft_strlcat.o ft_strstr.o ft_bzero.o ft_lstdelone.o ft_putchar.o ft_strcat.o ft_strlen.o ft_strsub.o ft_countint.o ft_lstiter.o ft_putchar_fd.o ft_strchr.o ft_strmap.o ft_strtrim.o ft_countword.o ft_lstmap.o ft_putendl.o ft_strclr.o ft_strmapi.o ft_tolower.o ft_isalnum.o ft_lstnew.o ft_putendl_fd.o ft_strcmp.o ft_strncat.o ft_toupper.o ft_isalpha.o ft_memalloc.o ft_putlst.o ft_strcpy.o ft_strncmp.o ft_isascii.o ft_memccpy.o ft_putnbr.o ft_strdel.o ft_strncpy.o ft_isdigit.o ft_memchr.o ft_putnbr_fd.o ft_strdup.o ft_strnequ.o ft_isprint.o ft_memcmp.o ft_putnstr.o ft_strequ.o ft_strnew.o ft_itoa.o ft_memcpy.o ft_putstr.o ft_striter.o ft_strnstr.o
NAME = libft.a
all :$(NAME)
$(NAME):
	    @gcc -Wall -Wextra -Werror -c $(Srcs)
		@ar rc $(NAME) $(Obje)
clean :
	@rm -f $(Obje)
fclean : clean
	@rm -f $(NAME)
re : fclean all
