
INC=/usr/include

INCLIB=$(INC)/../lib
INCLIN=./get_next_line/
INCMYLIB=./lib/

NAME = so_long

SRC = main.c map.c display.c hooks.c check_move.c $(INCLIN)get_next_line.c $(INCLIN)get_next_line_utils.c $(INCMYLIB)ft_strdup.c $(INCMYLIB)ft_strlen.c $(INCMYLIB)ft_strlcpy.c $(INCMYLIB)ft_putchar_fd.c $(INCMYLIB)ft_putnbr_fd.c $(INCMYLIB)ft_putstr_fd.c

FLAG = -Wall -Werror -Wextra

LFLAGS = -lbsd -L./minilibx -lmlx -L$(INCLIB) -lXext -lX11 -lm

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):	$(OBJ)
		gcc $(FLAG) -o $(NAME) $(OBJ) $(LFLAGS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re: clean all
