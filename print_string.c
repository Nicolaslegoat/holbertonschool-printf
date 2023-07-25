#include "main.h"
/**
 *print_string - print string
 * @args: arguments
 * Return: cmp_func
 */
int print_string(va_list args)
{
	int index;
	int cmp_func = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	if (str[O] == '\0')
		return (-1);

	while (str[index] != '\0')
		cmp_func += _myputchar(str[index]);
	index++;
	return (cmp_func);
}