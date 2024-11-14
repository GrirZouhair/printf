/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:37:15 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/14 16:05:53 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_len(unsigned int n)
{
	int len;

	len = 0;
	if(n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return(len);
}


int	ft_putnbr_uns(unsigned int n)
{
	int nbr;

	nbr = n;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
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
	return (ft_len(nbr));
}
