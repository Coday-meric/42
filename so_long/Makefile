
INC=/usr/include

INCLIB=$(INC)/../lib

NAME = so_long

SRC = main.c 

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
