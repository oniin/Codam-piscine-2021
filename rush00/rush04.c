#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	if (x > 1 && y > 1)
	{
		h = 1;
		while (h <= y)
		{
			w = 1;
			while (w <= x)
			{
				if ((w == 1 && h == 1) || (w == x && h == y && w > 1 && h > 1))
					ft_putchar('A');
				else if (w > 1 && w < x && h > 1 && h < y)
					ft_putchar(' ');
				else if ((w == 1 && h == y) || (w == x && h == 1))
					ft_putchar('C');
				else
					ft_putchar('B');
				w++;
			}
			write(1, "\n", 1);
			h++;
		}
	}
}
