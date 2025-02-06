/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:54:01 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:30:14 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	procedure(const char *str, int *i, va_list args)
{
	int	len;

	len = 0;
	if (str[*i + 1] == 'c')
		len += myputchar(va_arg(args, int));
	else if (str[*i + 1] == 's')
		len += myputstr(va_arg(args, char *));
	else if (str[*i + 1] == '%')
		len += myputchar('%');
	else if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
		len += myputnbr(va_arg(args, int));
	else if (str[*i + 1] == 'u')
		len += myputun(va_arg(args, int));
	else if (str[*i + 1] == 'x')
		len += myputhex(va_arg(args, int), "0123456789abcdef");
	else if (str[*i + 1] == 'X')
		len += myputhex(va_arg(args, int), "0123456789ABCDEF");
	else if (str[*i + 1] == 'p')
		len += myputp(va_arg(args, long), "0123456789abcdef");
	(*i)++;
	return (len);
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
	while (str[i])
	{
		if (str[i] == '%')
			len += procedure(str, &i, args);
		else
			len += myputchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
