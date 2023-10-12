/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:53:34 by yemoreno          #+#    #+#             */
/*   Updated: 2023/10/12 18:40:07 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./Libft/libft.h"

# ifndef HEX_LOW_BASE
#  define HEX_LOW_BASE "0123456789abcdef"
# endif

# ifndef HEX_HIGH_BASE
#  define HEX_HIGH_BASE "0123456789ABCDEF"
# endif

# ifndef DEC_BASE
#  define DEC_BASE "0123456789"
# endif

/**
 * @brief 	Replication of Printf function.
 * @param	char	*line : String that will be printed in console.
 * @param	... : other params that will be printed within the string '%' marks.
 * @return	The number of characters printed.
 */
int			ft_printf(const char *line, ...);
/**
 * @brief	Writes in console the character given.
 * @param	int	character : The int value of char to print.
 * @param	int	count : It adds 1 to the value if success, sets to -1 if error.
 */
void		ft_putchar(char character, int count);
/**
 * @brief	Checks for the type of argument requested and calls the respective 
 * 			function to the argument pointed.
 * @param	char	character : character that follows the % symbol.
 * @param	va_list	args : list of arguments it will pick.
 * @param	int		count : value where to save printed characters.
 */
void		ft_check_arg(char character, va_list args, int count);
/**
 * @brief	Writes in console the int number given in the specified base.
 * @param	int		number :	the number to write.
 * @param	char	*base :		string of the N-base to use.
 * @param	int		sign :		Determines wether to treat the number 
 * 								as unsigned or signed.
 * @param	int		count :		It adds the numbers printed to it or sets it
 * 								or sets it to -1 if error.
 */
void		ft_putnbr_base(int number, char	*base, int sign, int count);
/**
 * @brief	Writes in console the char array given.
 * @param	char	*str :	The string to write.
 * @param	int		count :	It adds the number of characters printed
 * 							or sets it to -1 if error.
 */
void		ft_putstr(char *str, int count);
/**
 * @brief	Writes in console the pointer given.
 * @param	char	*ptr : data from where to get the pointer.
 * @param	int		count : Adds the number of charaters printed to it
 * 							or sets to -1 if error.
 */
void		ft_putptr(void *ptr, int count);

#endif