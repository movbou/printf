/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myputhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:53:43 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:38:56 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	myputhex(unsigned int nbr, char *base)
{
	int		i;
	long	nb;
	int		putn[32];
	int		len;

	len = 0;
	i = 0;
	nb = nbr;
	if (nb == 0)
		len += write(1, &base[0], 1);
	while (nb > 0)
	{
		putn[i++] = nb % 16;
		nb /= 16;
	}
	while (i > 0)
		len += write (1, &base[putn[--i]], 1);
	return (len);
}
