#include "../ft_printf.h"

int	myputchar(char c)
{
	return (write(1, &c, 1));
}