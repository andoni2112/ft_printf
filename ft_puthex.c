/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:20:00 by andpascu          #+#    #+#             */
/*   Updated: 2026/07/06 16:20:15 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
	int		count;
	char	*base;

	count = 0;
	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, specifier);
	count += ft_putchar(base[n % 16]);
	return (count);
}
