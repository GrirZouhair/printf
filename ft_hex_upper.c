/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:34:54 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:04:13 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_hex_upper(unsigned int n)
{
	int	hex;

	if (n >= 16)
	{
		ft_hex_upper(n / 16);
	}
	hex = (n % 16);
	if (hex < 10)
	{
		hex += '0';
	}
	else
	{
		hex += 'A' - 10;
	}
	ft_putchar(hex);
	return (1);
}
