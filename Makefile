# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:17:33 by zogrir            #+#    #+#              #
#    Updated: 2024/12/03 08:26:56 by zogrir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_hex_lower.c ft_hex_upper.c ft_printf.c ft_ptr.c ft_putchar.c \
	ft_putnbr_uns.c ft_putnbr.c ft_putstr.c
OBJS = $(SRC:.c=.o)
LIB = ar -rc
RM = rm -f
CC = cc
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	$(LIB) $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:	clean