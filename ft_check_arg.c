/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:32:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 10:45:47 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(char character, va_list args)
{
	if (!character)
		return (-1);
	if (character == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (character == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (character == 'p')
		return (ft_putstr(va_arg(args, void *)));
	if (character == 'd')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	if (character == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	if (character == 'u')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 1));
	if (character == 'x')
		return (ft_putnbr_base(va_arg(args, int), "0123456789abcdef", 0));
	if (character == 'X')
		return (ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", 0));
	if (character == '%')
		return (write(0, "%%", 1));
	return (-1);
}
