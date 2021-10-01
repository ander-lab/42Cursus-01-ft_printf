/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:43:42 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/01 12:05:42 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int nb)
{
	unsigned int	res;
	int				r;

	r = 0;
	res = (unsigned int)nb;
	if (res >= 10)
		r += ft_putnbr(res / 10);
	r += ft_putchar((char)(res % 10 + 48));
	return (r);
}
