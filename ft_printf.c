/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 19:11:29 by andpascu          #+#    #+#             */
/*   Updated: 2026/07/03 19:17:51 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}
