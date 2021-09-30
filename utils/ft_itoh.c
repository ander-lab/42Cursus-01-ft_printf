/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:56:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/30 12:02:22 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>

static size_t	ft_size(unsigned long int n)
{
	size_t	size;

	size = 1;
	while (n / 16 > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

static void	hex_conversion(char *hex, size_t size, unsigned long int n, int caps)
{
	unsigned long int	aux;

	aux = 1;
	size -= 1;
	while (n)
	{
		aux = n % 16;
		if (aux < 10)
			aux += 48;
		else if (aux > 9 && caps == 0)
			aux += 87;
		else if (aux > 9 && caps == 1)
			aux += 55;
		hex[size--] = aux;
		n /= 16;
	}
}
char	*ft_itoh(unsigned long int n, int caps)
{
	size_t				size;
	char				*hex;

	size = ft_size(n);
	hex = malloc(sizeof(char) * size + 1);
	if (!hex)
		return (0);
	if (n == 0)
	{
		hex[size - 1] = '0';
		hex[size] = '\0';
		return (hex);
	}
	hex_conversion(hex, size, n, caps);
	hex[size] = '\0';
	return (hex);
}
