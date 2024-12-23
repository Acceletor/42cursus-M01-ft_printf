NAME = libftprintf.a

SRC = 	ft_printft.c \
		format/ft_putchar_pf.c \
		format/ft_putstr_pf.c \


OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
	