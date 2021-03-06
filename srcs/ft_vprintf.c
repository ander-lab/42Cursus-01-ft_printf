/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:25:36 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/01 12:15:44 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	free_itoh(va_list ag, int caps)
{
	char	*aux;
	int		trigger;

	aux = ft_itoh(va_arg(ag, unsigned int), caps);
	trigger = ft_putstr(aux);
	free (aux);
	return (trigger);
}

static int	free_ptr(va_list ag)
{
	char	*aux;
	int		trigger;

	aux = ft_ptr(va_arg(ag, unsigned int *));
	trigger = ft_putstr(aux);
	free (aux);
	return (trigger);
}

ssize_t	ft_vprintf(char c1, char c2, va_list ag)
{
	int		trigger;

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
		trigger = free_itoh(ag, 0);
	else if (c1 == '%' && c2 == 'X')
		trigger = free_itoh(ag, 1);
	else if (c1 == '%' && c2 == 'p')
		trigger = free_ptr(ag);
	else
		trigger = -1;
	return (trigger);
}
