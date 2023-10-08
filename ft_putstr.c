/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 11:58:22 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char	*str)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (str[i])
	{
		error = ft_putchar(str[i++]);
		if (error == -1)
			return (-1);
	}
	return (i);
}
