/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:47:48 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 09:30:55 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_putnbr_base(unsigned long nbr, const char *base)
{
    int len = 0;

    if (nbr > 15)
        len += ft_putnbr_base(nbr / 16, base);
    
    ft_putchar(base[nbr % 16]);
    return len + 1;
}

int	ft_ptr(void *ptr)
{
    unsigned long address = (unsigned long)ptr;
    const char *base = "0123456789abcdef";
    int len = 0;

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
    return len;
}
