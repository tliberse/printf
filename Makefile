# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 15:06:12 by tliberse          #+#    #+#              #
#    Updated: 2024/11/12 15:06:16 by tliberse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

CC 	= gcc
RM 	= rm -f
FL	= -Wall -Werror -Wextra

# -- SRC -- #

NAME = printf.a

SRC =	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_putunbr.c

OBJETS = $(SRC:%.c=%.o)

# -- Target -- #

all : $(NAME)

$(NAME):  $(OBJETS)
	ar rc $@ $^

%.o: %.c 
	$(CC) FL -o $@ -c $<

clean :
	RM $(OBJETS)

fclean : clean
	RM $(NAME)

re : fclean all

.PHONY: all clean fclean re