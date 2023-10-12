/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 18:34:48 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str, int count)
{
	int	error;

	if (!str)
		str = "(null)";
	error = write(0, str, ft_strlen(str));
	if (error == -1)
		count = -1;
	else
		count += error;
}
