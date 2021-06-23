/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dcsrushtest.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abarteld <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/19 13:23:12 by abarteld      #+#    #+#                 */
/*   Updated: 2021/06/19 18:34:09 by abarteld      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h> //illegal
#include<fcntl.h>

unsigned int	ft_valid(char *input)
{
	int	loop;

	loop = 0;
	while (input[loop] != '\0')
	{
		if (input[loop] >= '0' && input[loop] <= '9')
			loop++;
		else
			return (0);
	}
	return (1);
}
struct keys
{
	int	digits;
	char	letters[100];
};
int	main(int argc, char **argv)
{
	char	c;
	char			*string;
	const char		*dict;
//	unsigned int	input;
	int				fd;


	if (argc == 2)
	{
		string = argv[1];
		dict = "numbers.dict";
	}
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
	if (ft_valid(string) == 0)
	{
		write(1, "ErrAt\n", 6);
		return (0);
	}
	else
	{
//		input = ft_valid(string);
//		printf("%u\n", atoi(string));
//		printf("%u\n", ft_valid(string));
	}
//
//
//
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}

	while (read(fd, &c, 1) != 0)
	{
		if (c == string[0])
			printf("%c", c);
	}
}
