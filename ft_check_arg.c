/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:32:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 18:35:59 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_arg(char character, va_list args, int count)
{
	if (!character)
		count = -1;
	else if (character == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (character == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (character == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (character == 'd' || character == 'i')
		ft_putnbr_base(va_arg(args, int), DEC_BASE, 0, count);
	else if (character == 'u')
		ft_putnbr_base(va_arg(args, int), DEC_BASE, 1, count);
	else if (character == 'x')
		ft_putnbr_base(va_arg(args, int), HEX_LOW_BASE, 1, count);
	else if (character == 'X')
		ft_putnbr_base(va_arg(args, int), HEX_HIGH_BASE, 1, count);
	else if (character == '%')
		ft_putchar('%', count);
	else
		count = -1;
}
