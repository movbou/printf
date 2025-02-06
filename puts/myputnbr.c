/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myputnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:53:47 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:44:29 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	long	n;
	int		i;

	n = nb;
	putnb(nb);
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
