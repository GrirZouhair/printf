/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:12:06 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 10:03:53 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
char	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	int	i;
	int	printed_char;

	printed_char = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')// string
				printed_char += ft_putstr(va_arg(args, char *));
			else if (format[i + 1] == 'c')// caractere
				printed_char += ft_putchar(va_arg(args, int));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')// decimal integer
				printed_char += ft_putnbr(va_arg(args, int));
			else if (format[i + 1] == 'u')// unsigned decimal
				printed_char += ft_putnbr_uns(va_arg(args, int));
			else if (format[i + 1] == 'x')// convert into hex code
				printed_char += ft_hex_lower(va_arg(args, int));
			else if (format[i + 1] == 'X')
				printed_char += ft_hex_upper(va_arg(args, int));
			else if (format[i + 1] == 'p')// pointer
				printed_char += ft_ptr(va_arg(args, void *));
			else if (format[i + 1] == '%')
				printed_char += ft_putchar('%');
			i++;
		}
		else
			printed_char += ft_putchar(format[i]);	
		i++;
	}
		return (printed_char);
}


#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ft_ret, std_ret;

    // Test large integers
    ft_ret = ft_printf("Unsigned max: %u\n", 4294967295);
    std_ret = printf("Unsigned max: %u\n", 4294967295);
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    // Test NULL pointer
    ft_ret = ft_printf("Null pointer: %p\n", NULL);
    std_ret = printf("Null pointer: %p\n", NULL);
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    // Test precision and width
    ft_ret = ft_printf("Width and precision: %10.5d\n", 42);
    std_ret = printf("Width and precision: %10.5d\n", 42);
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    // Test 0 with precision
    ft_ret = ft_printf("Zero with precision: %.0d\n", 0);
    std_ret = printf("Zero with precision: %.0d\n", 0);
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    // Test hex with large number
    ft_ret = ft_printf("Hex: %#x\n", 2147483647);
    std_ret = printf("Hex: %#x\n", 2147483647);
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    // Test special case with '%'
    ft_ret = ft_printf("Percent: %%\n");
    std_ret = printf("Percent: %%\n");
    printf("Return: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);

    return 0;
}
