#include "ft_printf.h"

int	putc(char c)
{

	write(1, &c, 1);
  return (1);
}
