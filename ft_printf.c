/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:31:47 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/24 19:21:34 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	ssize_t	trigger;
	ssize_t	res;
	size_t	aux;
	va_list	ag;

	va_start(ag, str);
	res = 1;
	trigger = 0;
	aux = 0;
	while (str[aux])
	{
		trigger = ft_vprintf(str[aux], str[aux + 1], ag);
		if (trigger < 0)
			write(1, &str[aux], 1);
		else if (trigger >= 0)
			aux++;
		else
			res = 0;
		++aux;
	}
	va_end(ag);
	return (res);
}
