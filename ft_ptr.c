/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:47:48 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:01:09 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_puthx(unsigned long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthx((n / 16));
	}
	ft_putchar(hex[n % 16]);
}

char	ft_ptr(char *s)
{
	unsigned long	n;
	char			*hex;

	hex = "0123456789abcdef";
	ft_putchar('0');
	ft_putchar('x');
	if (s == NULL)
	{
		ft_putchar('0');
		return (1);
	}
	ft_puthx(n);
	return (1);
}
