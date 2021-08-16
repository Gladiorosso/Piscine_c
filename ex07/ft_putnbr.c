#include<unistd.h>

void	ft_putnbr(int	nb)
{
	char	num[12];
	int		div;
	int		i;

	i = 0;
	div = 10;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		num[i] = nb % div + '0';
		nb = nb / 10;
		i++;
	}
	num[i] = '\0';
	i--;
	while (i >= 0)
	{
		write(1, &num[i], 1);
		i--;
	}
}
