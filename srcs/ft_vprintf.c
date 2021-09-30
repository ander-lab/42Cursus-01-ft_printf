/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:25:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/30 21:00:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

ssize_t	ft_vprintf(char c1, char c2, va_list ag)
{
	int		trigger;
	char	*aux;

	if (c1 == '%' && c2 == 'c')
		trigger = ft_putchar(va_arg(ag, int));
	else if (c1 == '%' && c2 == '%')
		trigger = ft_putchar('%');
	else if (c1 == '%' && c2 == 's')
		trigger = ft_putstr(va_arg(ag, char *));
	else if (c1 == '%' && c2 == 'i')
		trigger = ft_putnbr(va_arg(ag, int));
	else if (c1 == '%' && c2 == 'd')
		trigger = ft_putnbr(va_arg(ag, int));
	else if (c1 == '%' && c2 == 'u')
		trigger = ft_putnbr_u(va_arg(ag, unsigned int));
	else if (c1 == '%' && c2 == 'x')
	{
		aux = ft_itoh(va_arg(ag, unsigned int), 0);
		trigger = ft_putstr(aux);
		free (aux);
	}
	else if (c1 == '%' && c2 == 'X')
	{
		aux = ft_itoh(va_arg(ag, unsigned int), 1);
		trigger = ft_putstr(aux);
		free (aux);
	}
	else if (c1 == '%' && c2 == 'p')
	{
		aux = ft_ptr(va_arg(ag, unsigned int *));
		trigger = ft_putstr(aux);
		free (aux);
	}
	else
		trigger = -1;
	return (trigger);
}
