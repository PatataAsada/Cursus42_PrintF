/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:10:23 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/08 12:55:43 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>

/**
 * @brief 	Replication of Printf function.
 * @param	char	*line : String that will be printed in console.
 * @param	... : other params that will be printed within the string '%' marks.
 * @return	The number of characters printed.
 */
int		ft_printf(const char *line, ...);
/**
 * @brief	Writes in console the character given.
 * @param	int	character : The int value of char to print.
 * @return	1 if success, -1 if error.
 */
int		ft_putchar(char character);
/**
 * @brief	Checks for the type of argument requested and calls the respective 
 * 			function to the argument pointed.
 * @param	char	character : Defines type of function to use.
 * @param	va_list	args : list of arguments.
 * @param	int		index : position of the argument on the list.
 */
int		ft_check_arg(char character, va_list args);
/**
 * @brief	Writes in console the int number given in the specified base.
 * @param	int		number :	the number to write.
 * @param	char	*base :		string of the base to use.
 * @param	int		sign :		if not false it will do the writing treating the
 * 								number as unsigned.
 * @return	The number of characters writen, -1 if error.
 */
int		ft_putnbr_base(int number, char	*base, int sign);
/**
 * @brief	Turns an int number to string following the given N-base.
 * @param	int		nbr :	The number to transform.
 * @param	char	*base :	The N-base to use.
 * @return	String with number given transformed in N-base.
 */
char	*ft_tonbrbase(int nbr, char *base);
/**
 * @brief	Writes in console the char array given.
 * @param	char	*str :	The string to write.
 * @return	The number of characters writen, -1 if error.
 */
int		ft_putstr(char	*str);
/**
 * @brief Checks that the base given is correct.
 * @param	char	*base :	The base given.
 * @return	1 if no char is repeated and it doesn't contain + or -
 * 			0 if repeated char or has + or -.
 */
int		ft_check_base(char *base);
/**
 * @brief	Joins the old and new string to a new string and frees
 * 			memory of old.
 * @param	char	*old :	The first string to copy.
 * @param	char	*new :	The second string to copy.
 * @return	New string of old + new. NULL if error.
 */
char	*ft_joinfree(char *old, char *new);

#endif