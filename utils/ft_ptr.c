/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:47:18 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/01 12:04:31 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_ptr(void *p)
{
	char	*ptr;
	char	*hex;
	size_t	aux_ptr;
	size_t	aux_hex;
	size_t	len;

	hex = ft_itoh((uintptr_t)p, 0);
	len = ft_strlen(hex);
	ptr = malloc(sizeof(char) * len + 4);
	if (!ptr)
		return (0);
	aux_ptr = 0;
	aux_hex = 0;
	ft_strlcpy(ptr, "0x", 3);
	while (ptr[aux_ptr])
		aux_ptr++;
	while (hex[aux_hex])
		ptr[aux_ptr++] = hex[aux_hex++];
	ptr[aux_ptr] = '\0';
	free(hex);
	return (ptr);
}
