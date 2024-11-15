/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:54:45 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/15 09:28:13 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdarg.h>
#include<stdio.h>
int					ft_putstr(char *s);
char				ft_putchar(char c);
int					ft_putnbr(int n);
int					ft_putnbr_uns(unsigned int n);
int					ft_hex_lower(unsigned int n);
int					ft_ptr(void *ptr);
int					ft_hex_upper(unsigned int n);

