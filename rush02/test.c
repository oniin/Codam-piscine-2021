#include<unistd.h>
#include<stdlib.h>
#include<stdio.h> //illegal
#include<fcntl.h>


int	main(int argc, char **argv)
{
	char	c;
	char			*string;
	const char		*dict;
//	unsigned int	input;
	int				fd;

	dict = "numbers.dict";
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	while (read(fd, &c, 1) != 0)
	{
		if (c == string[1])
			printf("%c", c);
	}
}
