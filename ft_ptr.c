/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:47:48 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 15:18:02 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	int	len;

	len = 0;
	if (nbr > 15)
		len += ft_putnbr_base(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	return (len + 1);
}

int	ft_ptr(void *ptr)
{
	unsigned long	address;
	const char		*base;
	int				len;

	len = 0;
	base = "0123456789abcdef";
	address = (unsigned long)ptr;
	ft_putchar('0');
	ft_putchar('x');
	len += 2;
	if (address == 0)
	{
		ft_putchar('0');
		len += 1;
	}
	else
	{
		len += ft_putnbr_base(address, base);
	}
	return (len);
}
