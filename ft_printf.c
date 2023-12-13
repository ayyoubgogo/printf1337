/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:30:57 by agaougao          #+#    #+#             */
/*   Updated: 2023/12/09 14:51:19 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printpointer(unsigned long long i)
{
	int	count;

	if (i == 0)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbrhex(i, LHEX);
	return (count);
}

static int	format(va_list args, const char *str)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*str == 'p')
		count += ft_printpointer(va_arg(args, size_t));
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			count += ft_putnbrhex(va_arg(args, unsigned int), LHEX);
		else
			count += ft_putnbrhex(va_arg(args, unsigned int), UHEX);
	}
	else if (*str == 'u')
		count += ft_putnbrhex(va_arg(args, unsigned int), "0123456789");
	else if (*str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (str == NULL)
		return (-1);
	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += format(args, &str[i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
