# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 14:18:44 by gbendjaf          #+#    #+#              #
#    Updated: 2021/07/18 19:19:53 by gbendjaf         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

INCLUDE = ../includes/libft.h

SRC = ft_strlen.c \
	  ft_atoi.c \
	  ft_itoa.c \
	  ft_power.c \
	  ft_isdigit.c \
	  ft_memalloc.c \
	  ft_strdup.c

OBJ = ${SRC:%.c=%.o}

%.o: %.c $(INCLUDE)
	@gcc $(CFLAGS) -c $< -I ../includes

all:		$(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: 	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
