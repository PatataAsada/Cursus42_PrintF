# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 09:24:25 by yemoreno          #+#    #+#              #
#    Updated: 2023/10/08 12:04:06 by yemoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include libft/Makefile

PRINTNAME = libftprintf.a
SOURCES = \
	ft_putchar.c\
	ft_printf.c\
	ft_check_arg.c\
	ft_putsrt.c\
	ft_putnbr_base.c\
	ft_nbr_to_base.c
OBJECTS = $(SOURCES:.c=.o)

all: $(PRINTNAME)

$(PRINTNAME): $(OBJECTS) #Creates .a file
	$(AR) -r $@ $?

%.o: %.c #Compiles objects
	$(CC) -c $(CFLAGS) $?

clean: #Cleans objects
	rm -f $(OBJECTS)

fclean: clean #Cleans .a file
	rm -f $(PRINTNAME)

re: fclean all

.PHONY: all bonus clean fclean re