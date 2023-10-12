/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:01:45 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 19:20:38 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *line, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!line)
		return (-1);
	va_start(args, line);
	i = 0;
	count = 0;
	while (line[i] && count != -1)
	{
		if (line[i] == '%')
			ft_check_arg(line[++i], args, &count);
		else
			ft_putchar(line[i], &count);
		i++;
	}
	va_end(args);
	if (count == -1)
		return (-1);
	return (count);
}
