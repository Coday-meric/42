
#include "so_long.h"

static void	ft_up(t_data *img)
{
	if (ft_check_wall(img, img->p_h - 1, img->p_w) == 1)
		img->p_h = img->p_h - 1;
		ft_create_img(img, "./assets/rabbit.xpm", 1);
}

static void	ft_down(t_data *img)
{
	if (ft_check_wall(img, img->p_h + 1, img->p_w) == 1)
		img->p_h = img->p_h + 1;
		ft_create_img(img, "./assets/rabbit.xpm", 1);
}

static void	ft_left(t_data *img)
{
	if (ft_check_wall(img, img->p_h, img->p_w - 1) == 1)
		img->p_w = img->p_w - 1;
		ft_create_img(img, "./assets/rabbit.xpm", 1);
}

static void	ft_right(t_data *img)
{
	if (ft_check_wall(img, img->p_h, img->p_w + 1) == 1)
		img->p_w = img->p_w + 1;
		ft_create_img(img, "./assets/rabbit.xpm", 1);
}

int	ft_hooks(int keycode, t_data *img)
{
	ft_putnbr_fd(keycode, 1);
	if (keycode == 65307)
		mlx_destroy_window(img->mlx, img->mlx_win);
	else if (keycode == 119)
		ft_up(img);
	else if (keycode == 115)
		ft_down(img);
	else if (keycode == 97)
		ft_left(img);
	else if (keycode == 100)
		ft_right(img);
	return (0);
}
