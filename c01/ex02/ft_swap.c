#include <unistd.h>
void    ft_swap(int *a, int *b);

int main(void)
{
	int	a;
	int	b;

	a = 122;
	b = 97;
	ft_swap(&a, &b);
	write(1, &a, 2);
	write(1, &b, 2);
}

void ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
