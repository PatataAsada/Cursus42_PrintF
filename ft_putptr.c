/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:52:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 20:10:48 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	unsigned int	ptr_address;

	ptr_address = (unsigned int) ptr;
	ft_putstr("0x", count);
	ft_putnbr_base_unsigned(ptr_address, HEX_LOW_BASE, count);
}
