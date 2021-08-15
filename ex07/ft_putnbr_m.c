#include<stdio.h>

void ft_putnbr(int nb);

int main()
{
	int		nb;

	scanf("%d", &nb);
	printf("nb = %d\n", nb);
	ft_putnbr(nb);
	printf("\n");
	return (0);
}
