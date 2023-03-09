//
// Created by aymeric on 08/03/23.
//
#include "so_long.h"

static void ft_create_img(t_data *img, char *asset)
{
	int		h;
	int		w;

	h = 32;
	w = 32;
	img->img = mlx_xpm_file_to_image(img->mlx, asset, &w, &h);
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, img->w, img->h);
}

static void	ft_treat_elem(char c, t_data *img)
{
	if (c == '1')
		ft_create_img(img, "./assets/three.xpm");
	else if (c == 'C')
		ft_create_img(img, "./assets/key.xpm");
	else if (c == 'E')
		ft_create_img(img, "./assets/door.xpm");
	else if (c == 'P')
		ft_create_img(img, "./assets/rabbit.xpm");
	else if (c == '\n')
	{
		img->w = 0;
		img->h = img->h + 32;
	}
	else if (c == '0')
		img->w = img->w + 32;
	if (c == '1' || c == 'C' || c == 'E' || c == 'P')
		img->w = img->w + 32;
}

void	ft_display_map(char **map)
{
	int		i;
	int		j;
	t_data	img;

	i = 0;
	j = 0;
	img.h = 0;
	img.w = 0;
	img.mlx = mlx_init();
	img.mlx_win = mlx_new_window(img.mlx, 1920, 1080, "Hello world!");
	while (map[i] != NULL)
	{
		while (map[i][j])
		{
			printf("CHAR : %c \n", map[i][j]);
			ft_treat_elem(map[i][j], &img);
			j++;
		}
		j = 0;
		i++;
	}
	mlx_loop(img.mlx);
}
