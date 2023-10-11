/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:52:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/09 17:52:23 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)arg;
	str = ft_tonbrbase(ptr_address, HEX_LOW_BASE);
	write(0, "0x", 2);
	write(0, ft_putstr(str), strlen(str))
	return (2 + strlen(str));
}
