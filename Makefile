# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 11:09:03 by obamzuro          #+#    #+#              #
#    Updated: 2019/03/03 14:53:27 by obamzuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FIX FUCKING ERROR PLEASE but NEXT TIME

SHELL := /bin/bash

NAME = libft.a

SRC := $(shell find . -name "*.c")
OBJECT = $(SRC:.c=.o)

HDIR   = include

all: $(NAME)

$(NAME): $(OBJECT)
	echo $(SRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Wall -o $@ -c $< -I $(HDIR)

clean:
	rm -f $(OBJECT)
	find . -name ".*.sw[konp]" -exec rm -rf {} \;

fclean: clean
	rm -f $(NAME)

re: fclean all
