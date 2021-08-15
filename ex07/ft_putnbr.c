#include<stdio.h>
#include<unistd.h>

void	ft_putnbr(int	nb)
{
	char	num[12];
	int			div;
	int			i;
	
	i = 0;
	if (nb < 0)
	{
		num[i] = '-';
		nb = -nb;
		i++;
	}
	div = 10000000;
	while (nb / div == 0){
		div /= 10;
	}
	while (nb / div != 0)
	{
		num[i] = nb / div + 48;
		printf("num %s\n", num);
		nb = nb - (nb / div) * div;
		printf("nb %d\n", nb);
		div = div / 10;
		printf("div %d\n", div);
		i++;
		printf("i %d\n", i);
	}
	//num[i] = '\0';
	printf("num %s\n", num);
}
