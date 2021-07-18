# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 16:48:38 by gbendjaf          #+#    #+#              #
#    Updated: 2021/07/18 19:09:46 by gbendjaf         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC	     = gcc
FLAGS    = -Wall -Werror -Wextra
LIBS	 = -L./libft -lft
LIBFT	 = libft/libft.a

all : libft server client

libft : 
	@$(MAKE) -C libft

server : $(LIBFT) my_server.o my_error_handler.o includes/my_minitalk.h
	$(CC) my_server.o my_error_handler.o $(LIBS) -o $@

client : $(LIBFT) my_client.o my_error_handler.o includes/my_minitalk.h
	$(CC) my_client.o my_error_handler.o $(LIBS) -o $@

%.o : %.c
	$(CC) $(FLAGS) $< -c -I includes

clean :
	@$(MAKE) clean -C libft
	@rm -f *.o

fclean: clean
	@$(MAKE) fclean -C libft
	@rm -f server client

re: fclean all

.PHONY: all clean fclean re libft