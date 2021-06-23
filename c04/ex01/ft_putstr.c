// #include <unistd.h>
// void ft_putstr(char *str);

// int	main()
// {
// 	char *str = "string";
// 	ft_putstr(str);
// }

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
