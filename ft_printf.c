 #include "ft_printf.h"
 int	procedure(const char *str, int *i, va_list args)
{
	int		len;
	len = 0;
	if(str[*i+1] == 'c')
		len += myputchar(va_arg(args,int));
	else if(str[*i+1] == 's')
		len += myputstr(va_arg(args,char *));
	else if(str[*i+1] == '%')
		len += myputchar('%');
	else if(str[*i+1] == 'd' || str[*i+1] == 'i')
		len += myputnbr(va_arg(args,int));
	else if(str[*i+1] == 'u')
		len += myputun(va_arg(args,int));
	else if(str[*i+1] == 'x')
		len += myputhex(va_arg(args,int), "0123456789abcdef");
	else if(str[*i+1] == 'X')
		len += myputhex(va_arg(args,int), "0123456789ABCDEF");
	else if(str[*i+1] == 'p')
		len += myputp(va_arg(args,long), "0123456789abcdef");
	(*i)++;
	return len;
}
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	i = 0;
   while (str[i]) {
     if (str[i]=='%') {
       len = procedure(str,&i,args);

     }
     else {
      len = myputchar(str[i]);
     }
     i++;
   }
	va_end(args);
	return (len);
}
int	main(void)
{

   ft_printf("%c %s %d",'a' ,"hmad" ,12);
    int a = 33;
    void *p = &a;
    ft_printf(":%d:",ft_printf("%p",NULL));

}
