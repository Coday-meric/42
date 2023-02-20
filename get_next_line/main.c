#include "get_next_line.h"

int	main()
{
	int fd;
	fd = open("test", O_RDWR);
	printf("\nLine : %s \n", get_next_line(fd));
	printf("Line2 : %s \n", get_next_line(fd));
}
