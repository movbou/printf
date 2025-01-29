#include "../ft_printf.h"

static void	putnb(int nb)
{
	char	num[11];
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (n == 0)
		write(1, "0", 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		num[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &num[--i], 1);
}
int	myputnbr(int nb)
{
    long    n;
    
    n = nb;
    putnb(nb);
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}