/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:23:22 by agaougao          #+#    #+#             */
/*   Updated: 2023/12/07 12:14:12 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	number_len(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	sign;

	sign = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (nb == 0)
		return (ft_putchar('0'));
	else if (nb < 0)
	{
		sign = ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
	return (number_len(nb) + sign);
}
