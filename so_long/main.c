
#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
		return (0);
	map = ft_treat_map(argv[1]);
	ft_display_map(map);
	return (0);
}
