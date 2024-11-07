/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:12:06 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:41:48 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
char	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	int	i;
	char	*printed_char;

	printed_char = NULL;
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
		return ((char)printed_char);
}

// int main()
// {
// 	int nbr = 1234;
// 	char string[] = "zouhair";
// 	char c = 'z';
// 	unsigned int nbr_unsigned = 999;
// 	int h = 15;
// 	int ptr = 123;
// 	ft_printf("decimal : %d,%i| string : %s | caractere :  %c | unsigned decimal : %u\n",nbr, nbr, string, c, nbr_unsigned);
// 	printf("\n");
// 	ft_printf("lower_hexcode : %x | upper_hexcode : %X | adrees of memory : %p | just %%\n", h, h, ptr);
// }