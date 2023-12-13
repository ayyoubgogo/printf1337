# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:31:05 by agaougao          #+#    #+#              #
#    Updated: 2023/12/07 13:24:39 by agaougao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC 		= gcc


CFLAGS 	= -Wall -Wextra -Werror 


SRCS	=	ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbrhex.c \
			ft_putstr.c ft_strlen.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME) : $(OBJS)
	ar -cr $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
