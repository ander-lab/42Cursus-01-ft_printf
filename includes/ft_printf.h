/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:20:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/28 16:00:52 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*
** SRCS
*/
int		ft_printf(const char *str, ...);
ssize_t	ft_vprintf(char c1, char c2, va_list ag);

/*
** UTILS
*/
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putnbr_u(int nb);
int		ft_putstr(char *s);
char	*ft_itoh(unsigned long int n, int caps);

#endif
