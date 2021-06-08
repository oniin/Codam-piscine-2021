#include <unistd.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	ft_ft(&nbr);
	write(1, &nbr, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
