#include <stdio.h>
int	ft_atoi(char *input);

int		main(void)
{
	char atoi[] = "155";

	printf("%d\n", ft_atoi(atoi));
}

int	ft_atoi(char *input)
{
	int	loop;
	int	atoi;

	loop = 0;
	while (input[loop] != '\0')
	{
		if (input[loop] >= '0' && input[loop] <= '9')
			loop++;
		else
			return (0);
	}
	loop = 0;
	atoi = 0;
	while (input[loop] != '\0')
	{
		atoi = (atoi * 10) + (input[loop] - 48);
		loop++;
	}
	return (atoi);
}
