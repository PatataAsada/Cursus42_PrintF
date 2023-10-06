
#include "libft.h"
#include <stdarg.h>

/**
 * @brief Replication of Printf function.
 * @param	char	*line : String that will be printed in console.
 * @param	... : other params that will be printed within the string '%' marks.
 * @return	The number of characters printed.
 */
int	ft_printf(const char *line, ...)
{
	char	*result;
	va_list	args;
	int		i;
	int		j;

	va_start(args, 0);
	if (!line)
		return (0);
	i = 0;
	j = 0;
	while (line[i])
	{
		if (line[i] == '%')
		{
			j++;
		}
		i++;
	}
	return (ft_strlen(result));
}
