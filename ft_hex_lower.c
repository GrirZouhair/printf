/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:46:16 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:03:24 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_hex_lower(unsigned int n)
{
	int	hex;

	if (n >= 16)
	{
		ft_hex_lower(n / 16);
	}
	hex = (n % 16);
	if (hex < 10)
	{
		hex += '0';
	}
	else
	{
		hex += 'a' - 10;
	}
	ft_putchar(hex);
	return (1);
}
