
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
	int		p_h;
	int		p_w;
	int		e_h;
	int		e_w;
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	**map;
};

char	**ft_treat_map(char *fileMap);
void	ft_display_map(char **map, t_data *img);
void	ft_create_img(t_data *img, char *asset, int p);
int	ft_hooks(int keycode, t_data *img);
int	ft_check_wall(t_data *img, int d_h, int d_w);

#endif //SO_LONG_H
