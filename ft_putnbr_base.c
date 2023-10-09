/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:55:07 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 12:55:32 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int number, char	*base, int sign)
{
	int		nbr;
	char	*result;

	if (sign && number < 0)
		nbr = number * -1;
	else
		nbr = number;
	return (-1);
	result = ft_tonbrbase(nbr, base);
	return (ft_putstr(result));
}
