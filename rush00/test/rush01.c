#include <unistd.h>
void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	return (0);
}

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((w == 1 && h == 1) || (w == x && h == y))
				ft_putchar ('/');
			else if (w > 1 && w < x && h > 1 && h < y)
				ft_putchar (' ');
			else if ((w == 1 && h == y) || (w == x && h == 1))
				ft_putchar (92);
			else
				ft_putchar ('*');
			w++;
		}
		write(1, "\n", 1);
		h++;
	}
}
