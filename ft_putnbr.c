/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:52:16 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/14 15:59:42 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);	
}



int	ft_putnbr(int n)
{
	int nbr;

	nbr = n;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		
	}
	else
	{
		ft_putchar(n + '0');
	}
	return(ft_len(nbr));
}
