# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 09:24:25 by yemoreno          #+#    #+#              #
#    Updated: 2023/10/08 09:24:51 by yemoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = \
	ft_putchar.c ft_printf.c ft_check_arg.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: #cleans objects
	rm -f $(OBJECTS)

fclean: clean #Cleans name
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re