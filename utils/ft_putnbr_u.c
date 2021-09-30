/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:43:42 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/27 17:45:36 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_u(int nb)
{
	unsigned int	res;

	if (nb < 0)
		return (0);
	else
		res = (unsigned int)nb;
	if (res >= 10)
		ft_putnbr(res / 10);
	ft_putchar((char)(res % 10 + 48));
	return (1);
}
