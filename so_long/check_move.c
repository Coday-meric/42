#include "so_long.h"

int	ft_check_wall(t_data *img, int d_h, int d_w)
{
	if (img->map[d_h][d_w] == '1')
		return (0);
	return (1);
}
