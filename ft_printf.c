/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:01:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 12:55:16 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *line, ...)
{
	va_list	args;
	int		i;
	int		error;
	int		count;

	if (!line)
		return (0);
	va_start(args, line);
	i = 0;
	error = 0;
	count = 0;
	while (line[i] && error != -1)
	{
		if (line[i] == '%')
			error = ft_check_arg(line[++i], args);
		else
			error = ft_putchar(line[i]);
		i++;
		count += error;
	}
	if (error == -1)
		return (-1);
	return (count);
}
