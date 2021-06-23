ft_ft test 

#include <unistd.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	ft_ft(&nbr);
	write(1, &nbr, 1);
}


ft_ultimate_ft test

int main(void)
{
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	int value;
	value = 1000;
	ptr1 = &value;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("%c", *********ptr9);
}

// ft_swap test

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

// ft_div_mod


int	main()
{
	int i = 42;
	int j = 20;
	int x = 0;
	int y = 0;
ft_div_mod(i, j, &x, &y);
	printf("%d " " %d", x, y);

}


// ft_ultimate_div_mod

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	a;
	int	b;

	a = 250;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}


// ft_putstr 

#include<unistd.h>
int	main(void)
{
	ft_putstr("string");
	return (0);
}

// ft_strlen
#include <stdio.h>

int	main(void)
{
	char str[] = "string";
	int count = ft_strlen(str);
	printf("%d\n", count);
}
