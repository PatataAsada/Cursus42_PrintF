/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:55:07 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 19:45:32 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief	Measures the length of the N-base given.
 * @param	char	*base : The N-base given.
 * @return	The length of the string. -1 if there is a + or a -
 * 			or there is a repeated character in base.
 */
int	ft_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		++i;
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

/**
 * @brief	Calls the putchar function to write the number given
 * 			as a N-base number.
 * @param	int		nbr :		The number to write.
 * @param	int		base :		The length of the N-base.
 * @param	char	*chars :	The characters of the N-base.
 * @param	int		count :		It adds the characters writen to itself
 * 								sets to -1 if error.
*/
void	i_base(int nbr, int base, char *chars, int *count)
{
	if (nbr < base)
	{
		ft_putchar(chars[nbr % base], count);
	}
	else
	{
		i_base(nbr / base, base, chars, count);
		ft_putchar(chars[nbr % base], count);
	}
}

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	int	l;

	l = ft_len(base);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-', count);
			i_base((nbr / l) * -1, l, base, count);
			ft_putchar(base[nbr % l * -1], count);
		}
		else if (nbr < 0)
		{
			ft_putchar('-', count);
			i_base(nbr * -1, l, base, count);
		}
		else
			i_base(nbr, l, base, count);
	}
}
