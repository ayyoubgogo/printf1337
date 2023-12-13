/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaougao <agaougao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:30:53 by agaougao          #+#    #+#             */
/*   Updated: 2023/12/06 18:30:27 by agaougao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define LHEX "0123456789abcdef"
# define UHEX "0123456789ABCDEF"

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb);
int	ft_putnbrhex(size_t nb, char *base);
int	ft_putstr(char *s);
int	ft_strlen(const char *str);

#endif