/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:31:52 by ajimenez          #+#    #+#             */
/*   Updated: 2021/09/30 12:06:47 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <limits.h>

int main()
{
	int fp;
	int p;
	int n = 0;

	printf("***************printf***************\n");	
	p = printf("value of a: %i\n", 0);
	printf("value of b: %i\n", 0);
	printf("%i\n", p);
	printf("***************ft_printf***************\n");	
	fp = ft_printf("value of a: %i\n", 0);
	ft_printf("value of b: %i\n", 0);
	printf("%i", fp);
	return 0;
}

