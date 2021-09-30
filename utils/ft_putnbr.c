/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:48:03 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/30 12:45:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	res;
	int	r;

	r = 0;
	if (nb < 0)
	{
		r += ft_putchar('-');
		res = (unsigned int)(nb * -1);
	}
	else
		res = (unsigned int)nb;
	if (res >= 10)
		r += ft_putnbr(res / 10);
	r += ft_putchar((char)(res % 10 + 48));
	return (r);
}
