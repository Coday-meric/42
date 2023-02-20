# 42

cc -Wall -Wextra -Werror -D BUFF_SIZE=8 -g3 -fsanitize=address get_next_line.c get_next_line_utils.c main.c -L. -lft
