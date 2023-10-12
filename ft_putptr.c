/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:52:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 18:35:31 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *arg, int count)
{
	int	error;

	if (!arg)
		arg = "(null)";
	else
		count += write(0, "0x", 2);
	error = write(0, arg, ft_strlen(arg));
	if (error == -1)
		count = -1;
	else
		count += error;
}
