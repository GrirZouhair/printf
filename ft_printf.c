/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:12:06 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/05 13:30:52 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int	i;
	int	printed_char;

	printed_char = 0;
	i = 0;
	while (format[i])
	{
		if (format[i + 1] == 's')
		{
			printed_char += ft_putstr(va_arg(args, char *));
		}
		else if (format[i + 1] == 'c')
		{
			printed_char += ft_putchar((char)va_arg(args, int));
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			printed_char += ft_putnbr(va_arg(args, int));
		}
		
		i++;
	}
		
}
