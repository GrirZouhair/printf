/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:34:54 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/16 10:42:42 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putnbr_base(unsigned int nbr, const char *base)
{
	static int	len;

	len = 0;
	if (nbr > 15)
		ft_putnbr_base(nbr / 16, base);
	len++;
	ft_putchar(base[nbr % 16]);
	return (len);
}

int	ft_hex_upper(unsigned int n)
{
	const char	*base;
	int			len;

	base = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
	{
		ft_putchar('0');
		len += 1;
	}
	else
	{
		len += ft_putnbr_base(n, base);
	}
	return (len);
}
