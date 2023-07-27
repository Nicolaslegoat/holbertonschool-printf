#include "main.h"
/**
 * get_func - function specifiers
 * @conv: specifiers convert
 * @args: arguments
 * Return: sucess
 */
int get_func(char conv, va_list args)
{
	int index = 0;
	int cmp_func = 0;

	spec_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_num},
		{'i', print_num},
		{0, NULL}
	};
	while (spec[index].specifiers)
	{
		if (conv == spec[index].specifiers)
			cmp_func += spec[index].f(args);
		index++;
	}
		if (cmp_func == 0)
		{
			cmp_func += _myputchar('%');
			cmp_func += _myputchar(conv);
		}
		return (cmp_func);
}
