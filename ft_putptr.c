/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:52:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 21:54:43 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	uintptr_t	ptr_address;

	ptr_address = (uintptr_t) ptr;
	ft_putstr("0x", count);
	if (!ptr)
		ft_putchar('0', count);
	else
		ft_putnbr_base_unsigned(ptr_address, HEX_LOW_BASE, count);
}
