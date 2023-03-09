
#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	t_data	*img;

	img = malloc(sizeof(t_data));
	if (argc != 2)
		return (0);
	map = ft_treat_map(argv[1]);
	img->mlx = mlx_init();
	img->mlx_win = mlx_new_window(img->mlx, 1920, 1080, "Hello world!");
	
	ft_display_map(map, img);
	mlx_hook(img->mlx_win, 2, 1L<<0, ft_hooks, img);
	
	mlx_loop(img->mlx);
	return (0);
}
