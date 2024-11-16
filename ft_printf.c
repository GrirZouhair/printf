/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:12:06 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/16 12:08:57 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifiers(char specifier, va_list args)
{
	int	printed_char;

	printed_char = 0;
	if (specifier == 's')
		printed_char += ft_putstr(va_arg(args, char *));
	else if (specifier == 'c')
		printed_char += ft_putchar((char )va_arg(args, int));
	else if (specifier == 'd' || specifier == 'i')
		printed_char += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		printed_char += ft_putnbr_uns(va_arg(args, int));
	else if (specifier == 'x')
		printed_char += ft_hex_lower(va_arg(args, unsigned int));
	else if (specifier == 'X')
		printed_char += ft_hex_upper(va_arg(args, unsigned int));
	else if (specifier == 'p')
		printed_char += ft_ptr(va_arg(args, void *));
	else if (specifier == '%')
		printed_char += ft_putchar('%');
	return (printed_char);
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				printed_char;
	va_list			args;

	va_start(args, format);
	i = 0;
	printed_char = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed_char += ft_format_specifiers(format[i + 1], args);
			i++;
		}
		else
			printed_char += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed_char);
}
