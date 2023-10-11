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

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft

SRCS = \
	ft_printf.c \
	ft_check_arg.c \
	ft_nbr_to_base.c \
	ft_putchar.c \
	ft_putnbr_base.c \
	ft_putstr.c \
	ft_putptr.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

all: $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
    
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
    
re: fclean all

.PHONY: all bonus clean fclean re