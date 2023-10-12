/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:45:54 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 23:47:29 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief	Measures the length of the N-base given.
 * @param	char	*base : The N-base given.
 * @return	The length of the string. -1 if there is a + or a -
 * 			or there is a repeated character in base.
 */
int	ft_long_len(char *base)
{
	unsigned long long	i;
	unsigned long long	j;

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
 * @param	unsigned long long		nbr :		The number to write.
 * @param	int		base :		The length of the N-base.
 * @param	char	*chars :	The characters of the N-base.
 * @param	int		count :		It adds the number of charaters printed to it.
*/
void	ft_ulong_base(unsigned long long nbr, unsigned long long base,
			char *chars, int *count)
{
	if (nbr < base)
		ft_putchar(chars[nbr], count);
	else
	{
		ft_ulong_base(nbr / base, base, chars, count);
		ft_putchar(chars[nbr % base], count);
	}
}

void	ft_putnbr_base_unsigned(unsigned long long nbr, char *base, int *count)
{
	if (ft_long_len(base) >= 2)
	{
		if (nbr < 0)
		{
			ft_putchar('-', count);
			ft_ulong_base(nbr * -1, ft_long_len(base), base, count);
		}
		else
			ft_ulong_base(nbr, ft_long_len(base), base, count);
	}
}
