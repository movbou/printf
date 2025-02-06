/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myputp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:53:53 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:46:44 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	myputp(unsigned long nb, char *base)
{
	int	i;
	int	putn[32];
	int	len;

	len = 0;
	i = 0;
	if (nb == 0)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		while (nb > 0)
		{
			putn[i++] = nb % 16;
			nb /= 16;
		}
		while (i > 0)
			len += write (1, &base[putn[--i]], 1);
	}
	return (len);
}
