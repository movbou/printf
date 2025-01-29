#include "../ft_printf.h"

int	myputstr(char *s)
{
	int i;
	i = 0;
	while (s[i])
		i++;
	return (write(1, s, i));
}