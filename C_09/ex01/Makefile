# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mannouao <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 14:23:43 by mannouao          #+#    #+#              #
#    Updated: 2021/08/25 08:50:09 by mannouao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
NAME	= libft.a
OBJS	= $(SRCS:.c=.o) 
HEADER	= ./includes/
GCC 	= gcc
CFLAGS	= -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)  -I $(HEADER)

clean :
	rm -f $(OBJS) 

fclean : clean
	rm -f $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
