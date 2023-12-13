/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:30:44 by agaougao          #+#    #+#             */
/*   Updated: 2023/12/09 14:34:03 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex(size_t nb, char *base)
{
	size_t	base_len;
	int		count;

	count = 0;
	base_len = ft_strlen(base);
	if (nb >= base_len)
		count += ft_putnbrhex(nb / base_len, base);
	count += ft_putchar(base[nb % base_len]);
	return (count);
}
