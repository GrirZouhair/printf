/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:54:45 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:02:04 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdarg.h>
#include<stdio.h>
char				ft_putstr(char *s);
char				ft_putchar(char c);
char				ft_putnbr(int n);
char				ft_putnbr_uns(unsigned int n);
char				ft_hex_lower(unsigned int n);
char				ft_hex_upper(unsigned int n);
char				ft_ptr(char *s);

