/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:56:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/27 11:41:51 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_size(int n)
{
	size_t	size;

	size = 0;
	while (n / 16 > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

char	*ft_itoh(unsigned long int n, int caps)
{
	size_t				size;
	char				*hex;
	unsigned long int	aux;

	size = ft_size(n);
	hex = malloc(sizeof(char) * size + 1);
	if (!hex)
		return (0);
	aux = 1;
	while (n)
	{
		aux = n % 16;
		if (aux < 10)
			aux += 58;
		else if (aux > 9 && caps == 0)
			aux += 87;
		else if (aux > 9 && caps == 1)
			aux += 55;
		hex[size--] = aux;
		n /= 16;
	}
	if (n == 0)
		hex[0] = '0';
	hex[aux] = '\0';
	return (hex);
}
