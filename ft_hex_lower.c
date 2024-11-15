/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:46:16 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 09:37:12 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int		ft_hex_lower(unsigned int n)
// {
// 	int	hex;

// 	if (n >= 16)
// 	{
// 		ft_hex_lower(n / 16);
// 	}
// 	hex = (n % 16);
// 	if (hex < 10)
// 	{
// 		hex += '0';
// 	}
// 	else
// 	{
// 		hex += 'a' - 10;
// 	}
// 	ft_putchar(hex);
// 	return ();
// }


static int ft_putnbr_base(unsigned int nbr, const char *base)
{
    int len = 0;

    if (nbr > 15)
        len += ft_putnbr_base(nbr / 16, base);
    
    ft_putchar(base[nbr % 16]);
    return len + 1;
}

int		ft_hex_lower(unsigned int n)
{
    const char *base = "0123456789abcdef";
    int len = 0;

    if (n == 0)
    {
        ft_putchar('0');
        len += 1;
    }
    else
    {
        len += ft_putnbr_base(n, base);
    }
    return len;
}
