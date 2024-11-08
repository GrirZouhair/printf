/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:39:48 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 15:02:05 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

char ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, NULL, 1);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(1);
}