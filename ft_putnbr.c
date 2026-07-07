/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andpascu <andpascu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:15:39 by andpascu          #+#    #+#             */
/*   Updated: 2026/07/06 16:15:54 by andpascu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_rec(long nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_rec(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	count += ft_putnbr_rec(nb);
	return (count);
}
