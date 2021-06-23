#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(char *input);

int	main(int argc, char **argv)
{
	char	*string;
	char	*dict;
	int		input;

	if (argc == 2)
		string = argv[1];
	else if (argc == 3)
	{
		dict = argv[1];
		string = argv[2];
	}
	else
	{
		write(1, "ErrIn\n", 6);
		return (0);
	}
	if (ft_atoi(string) == 0)
	{
		write(1, "ErrAt\n", 6);
		return (0);
	}
	else
	{
		input = ft_atoi(string);
		printf("%d\n", atoi(string));
		printf("%d\n", ft_atoi(string));
	}
}
