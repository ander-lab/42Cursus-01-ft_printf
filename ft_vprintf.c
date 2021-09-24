/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:25:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/24 19:36:34 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_vprintf(char c1, char c2, va_list ag)
{
	ssize_t	trigger;

	if (c1 == '%' && c2 == 'c')
		trigger = ft_putchar();
	else if (c1 == '%' && c2 == '%')
		trigger = ft_putchar('%');
	else if (c1 == '%' && c2 == 's')
		trigger = ft_putstr(ag);
	else if (c1 == '%' && c2 == 'i')
		trigger = ft_putnbr(ag);
	else if (c1 == '%' && c2 == 'd')
		trigger = ft_putdecimal(ag);
	else if (c1 == '%' && c2 == 'u')
		trigger = ft_pos(ft_putdecimal(ag));
	else if (c1 == '%' && c2 == 'x')
		trigger = ft_putnbrbase(ag);
	else if (c1 == '%' && c2 == 'X')
		trigger = ft_upper(ft_putnbrbase(ag));
	else if (c1 == '%' && c2 == 'p')
		trigger = puntero;//ni zorra bb
	return (trigger);
}
