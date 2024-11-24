/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:46:16 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/24 12:36:54 by zogrir           ###   ########.fr       */
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
	ft_putchar (base[nbr % 16]);
	return (len);
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
