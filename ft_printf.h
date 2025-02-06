/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achajar <achajar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:54:56 by achajar           #+#    #+#             */
/*   Updated: 2025/02/06 02:20:44 by achajar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	myputchar(char c);
int	myputstr(char *s);
int	myputnbr(int nb);
int	myputun(unsigned int nb);
int	myputhex(unsigned int nbr, char *base);
int	myputp(unsigned long nb, char *base);

#endif
