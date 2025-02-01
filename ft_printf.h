#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
int		ft_printf(const char *str, ...);
int myputchar(char c);
int myputstr(char *s);
int	myputnbr(int nb);
int	myputun(unsigned int nb);
int	myputhex(unsigned int nbr, char *base);
int	myputp(unsigned long nb, char *base);
#endif
