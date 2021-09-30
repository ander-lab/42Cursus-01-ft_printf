/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:47:18 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/28 13:29:59 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_strlen(char *str)
{
	size_t len;

	len = 0;
	while(str[len] != 0)
		len++;
	return (len);
}

char	*ft_putpointer(void *p)
{
	char	*ptr;
	char	*hex;

	while ()
}
