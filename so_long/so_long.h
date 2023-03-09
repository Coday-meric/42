
#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"
# include "./minilibx/mlx.h"
# include "./minilibx/mlx_int.h"
# include "./lib/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_data	t_data;
struct	s_data
{
	int		h;
	int		w;
	void	*mlx;
	void	*mlx_win;
	void	*img;
};

char	**ft_treat_map(char *fileMap);
void	ft_display_map(char **map);

#endif //SO_LONG_H
