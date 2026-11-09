NAME = libftprintf.a

SRCS = ft_printf.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthex.c  ft_putptr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $<

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
