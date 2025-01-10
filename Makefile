# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 14:32:08 by ksuebtha          #+#    #+#              #
#    Updated: 2025/01/10 15:11:34 by ksuebtha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_putchar_pf.c \
		ft_putstr_pf.c \
		ft_putptr_pf.c \
		ft_putnbr_pf.c \
		ft_convert_pf.c \
		ft_putuint_pf.c \
		


OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
	