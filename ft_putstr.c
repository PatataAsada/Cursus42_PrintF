/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 19:30:03 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str, int *count)
{
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	(*count) += ft_strlen(str);
}
