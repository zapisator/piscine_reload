# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/24 13:42:23 by ftothmur          #+#    #+#              #
#    Updated: 2018/12/24 16:36:44 by ftothmur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

LIB =		libft.a

HDR = 		./include

OBJ = 		ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

FLAGS =		-Wall \
			-Wextra \
			-Werror

all:		$(LIB)

$(LIB):		$(OBJ)
			ar rc $(LIB) $(OBJ)
			ranlib $(LIB)

%.o : 		./srcs/%.c
			gcc -c $(FLAGS) $< -I $(HDR)

clean:
			/bin/rm -f *.o

fclean: 	clean
			/bin/rm -f $(LIB)

re:			fclean all
