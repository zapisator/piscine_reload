# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/25 21:43:49 by ftothmur          #+#    #+#              #
#    Updated: 2018/12/28 23:10:36 by ftothmur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

BIN =		ft_display_file
LIB =		libft.a

LIB_DIR =	.
HDR_DIR =	./includes/
SRC_DIR =	./srcs/

OBJ = 		$(SRC:.c=.o)
SRC = 		ft_fputchar.c \
			ft_fputstr.c \
			ft_error.c 

CC_FLAGS =	-Wall \
			-Wextra \
			-Werror
LIB_FLAGS =	-L$(LIB_DIR) -lft 

all:		$(BIN) $(LIB) 
			gcc $(CC_FLAGS) -o $(BIN) \
				$(SRC_DIR)/$(BIN).c $(LIB_FLAGS) -I$(HDR_DIR)

	
$(BIN):		$(LIB)

$(LIB):		$(OBJ)
			ar rc $(LIB) $(OBJ)
			ranlib $(LIB)

%.o : 		$(SRC_DIR)/%.c
			gcc -c $(CC_FLAGS) $< -I$(HDR_DIR)

clean:
			/bin/rm -f *.o
			/usr/bin/find . \
				\( \
					-name "*~" -o \
					-name "#*#" -o \
					-name "a.out" -o \
					-name "*.swp" -o \
					-name "*.swo" \
				\) \
				-print -delete

fclean: 	clean
			/bin/rm -f $(BIN)

re:			fclean all
