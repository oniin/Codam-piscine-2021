#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int fd;
	int	sz;
	char	*c = (char *) calloc(100, sizeof(char));

	fd = open ("maptest", O_RDONLY);
	read(fd, &fd, 1);
	printf ("fd = %d\n", fd);
	int close (int fd);
	return (0);
}
