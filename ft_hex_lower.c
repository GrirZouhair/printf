/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:46:16 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 15:05:03 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putnbr_base(unsigned int nbr, const char *base)
{
	int	len;

	len = 0;
	if (nbr > 15)
		len += ft_putnbr_base(nbr / 16, base);
	ft_putchar (base[nbr % 16]);
	return (len + 1);
}

int	ft_hex_lower(unsigned int n)
{
	const char	*base;
	int			len;

	base = "0123456789abcdef";
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
