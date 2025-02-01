NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

SRC = ft_printf.c puts/myputchar.c puts/myputstr.c puts/myputnbr.c puts/myputun.c puts/myputhex.c puts/myputp.c

OBJ := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: 
	$(RM) $(NAME)

re: fclean all
