# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 15:06:12 by tliberse          #+#    #+#              #
#    Updated: 2024/11/12 17:09:26 by tliberse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

CC	= gcc
RM	= rm -f
FL	= -Wall -Werror -Wextra -o

# -- SRC -- #

NAME = libftprintf.a

SRC =	ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_puthexptr.c\
		ft_putnbr.c\
		ft_putunbr.c\
		ft_putnbrhex_low.c\
		ft_putnbrhex_up.c

OBJETS = $(SRC:%.c=%.o)

# -- Target -- #

all : $(NAME)

$(NAME):  $(OBJETS)
	ar rc $@ $^

%.o: %.c
	$(CC) $(FL) $@ -c $<

clean :
	$(RM) $(OBJETS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
