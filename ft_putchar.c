/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:32:59 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 18:40:35 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char character, int count)
{
	int	error;

	error = write(0, &character, 1);
	if (error == -1 || count == -1)
		count = -1;
	else
		count += 1;
}
