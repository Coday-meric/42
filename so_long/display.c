//
// Created by aymeric on 08/03/23.
//
#include "so_long.h"

void	ft_create_img(t_data *img, char *asset, int p)
{
	int		h;
	int		w;

	h = 32;
	w = 32;
	img->img = mlx_xpm_file_to_image(img->mlx, asset, &w, &h);
	if (p == 1)
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, (img->p_w * 32), (img->p_h * 32));
	else
		mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, (img->w * 32), (img->h * 32));
}

static void	ft_treat_elem(char c, t_data *img)
{
	if (c == '1')
		ft_create_img(img, "./assets/three.xpm", 0);
	else if (c == 'C')
		ft_create_img(img, "./assets/key.xpm", 0);
	else if (c == 'E')
	{
		img->e_w = img->w;
		img->e_h = img->h;
		ft_create_img(img, "./assets/door.xpm", 0);
	}
	else if (c == 'P')
	{
		img->p_w = img->w;
		img->p_h = img->h;
		ft_create_img(img, "./assets/rabbit.xpm", 1);
	}
	else if (c == '\n')
	{
		img->w = 0;
		img->h = img->h + 1;
	}
	else if (c == '0')
		img->w = img->w + 1;
	if (c == '1' || c == 'C' || c == 'E' || c == 'P')
		img->w = img->w + 1;
}

void	ft_display_map(char **map, t_data *img)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	img->h = 0;
	img->w = 0;
	img->map = map;
	while (img->map[i] != NULL)
	{
		while (img->map[i][j])
		{
			printf("CHAR : %c \n", img->map[i][j]);
			ft_treat_elem(img->map[i][j], img);
			j++;
		}
		j = 0;
		i++;
	}
}
