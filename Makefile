# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 19:48:13 by ajimenez          #+#    #+#              #
#    Updated: 2021/10/01 12:24:17 by ajimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libftprintf.a

INCLUDE	= ./includes/ft_printf.h
SRCS	=	./srcs/ft_printf.c ./srcs/ft_vprintf.c ./utils/ft_itoh.c\
		  	./utils/ft_strlcpy.c ./utils/ft_ptr.c ./utils/ft_putnbr.c\
			./utils/ft_putstr.c ./utils/ft_putstr.c ./utils/ft_putchar.c\
			./utils/ft_putnbr_u.c


OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
			
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
