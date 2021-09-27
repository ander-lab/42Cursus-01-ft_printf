/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:31:47 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/27 09:58:09 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	ssize_t	trigger;
	ssize_t	res;
	size_t	aux;
	va_list	ag;

	va_start(ag, str);
	res = 1;
	trigger = 0;
	aux = 0;
	while (str[aux])
	{
		trigger = ft_vprintf(str[aux], str[aux + 1], ag);
		if (trigger < 0)
			res += write(1, &str[aux], 1);
		else if (trigger >= 0)
		{
			res += trigger;
			aux++;
		}
		++aux;
	}
	va_end(ag);
	return (res);
}
/*while the string != 0, you call the function vprint(variable prints)
 * if the trigger < 0 is because the str doesn´t entered in any condition.
 * trigger = -1 so you write the char. If trigger >= 0 is because entered in one 
 * condition.*/
