#include "get_next_line.h"

int	main()
{
	int fd;
	char *res;
	fd = open("test", O_RDWR);
	res = get_next_line(fd);
	printf("RES : %s \n", res);
	free(res);	
	res = get_next_line(fd);
	printf("RES 2: %s \n", res);
	free(res);
	res = get_next_line(fd);
	printf("RES 3: %s \n", res);
	free(res);	
	return (0);
}
