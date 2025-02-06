/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myputun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:53:58 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:42:24 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	putun(unsigned int nb)
{
	char	num[11];
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (n == 0)
		write(1, "0", 1);
	while (n > 0)
	{
		num[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &num[--i], 1);
}

int	myputun(unsigned int nb)
{
	long	n;
	int		i;

	n = nb;
	putun(nb);
	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
