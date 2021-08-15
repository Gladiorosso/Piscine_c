#include <unistd.h>

void ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
				while (d <= '9')
				{
					write(1, &a, 4);
					write(1, " ", 1);
					write(1, &b, 4);
					write(1, ", ", 2);
					d++;
				}
				c++				
			}
			
		}
	a++;
	b = a + 1;
	}
}
