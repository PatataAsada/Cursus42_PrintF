/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:48:42 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 12:51:44 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**
 * @brief Checks that the base given is correct.
 * @param	char	*base :	The base given.
 * @return	1 if no char is repeated and it doesn't contain + or -
 * 			0 if repeated char or has + or -.
 */
int	ft_check_base(char *base)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	if (base == NULL)
		return (0);
	else
	{
		while (i < ft_strlen(base))
		{
			while (j < ft_strlen(base) && base[j + 1])
			{
				if (base[j + 1] == base[i])
					return (0);
				if (base[j] == '-' || base[j] == '+')
					return (0);
				j++;
			}
			i++;
			j = i;
		}
	}
	return (1);
}

/**
 * @brief	Joins the old and new string to a new string and frees
 * 			memory of old.
 * @param	char	*old :	The first string to copy.
 * @param	char	*new :	The second string to copy.
 * @return	New string of old + new. NULL if error.
 */
char	*ft_joinfree(char *old, char *new)
{
	char	*tmp;

	if (!old && !new)
		return (NULL);
	tmp = ft_strjoin(old, new);
	if (!tmp)
		free(tmp);
	free(old);
	return (tmp);
}

char	*ft_tonbrbase(int nbr, char *base)
{
	char	*result;
	char	*add;

	if (!base || !nbr || nbr * -1 - 1 == 2147483647)
		return (NULL);
	add = ft_calloc(2, sizeof(char));
	if (!add)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		add[0] = '-';
		result = ft_joinfree(result, add);
	}
	if (nbr >= ft_strlen(base))
		result = ft_joinfree(result, ft_tonbrbase(nbr / ft_strlen(base), base));
	add[0] = base[nbr % ft_strlen(base)];
	result = ft_joinfree(result, add);
	free(add);
	return (result);
}
