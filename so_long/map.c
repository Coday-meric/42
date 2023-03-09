
#include "so_long.h"

static char	**ft_alloc_map(char *fileMap)
{
	int		i;
	int		fd;
	char	*line;
	char	**map;

	i = 0;
	fd = open(fileMap, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	map = malloc(i * sizeof(char *));
	return (map);
}

char	**ft_treat_map(char *fileMap)
{
	int		i;
	int		fd;
	char	**map;
	char	*line;

	i = 0;
	map = ft_alloc_map(fileMap);
	fd = open(fileMap, O_RDONLY);
	while (line != NULL)
	{
		line = get_next_line(fd);
		map[i] = line;
		i++;
	}
	close(fd);
	return (map);
}
