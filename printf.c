#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - function output the format
 * @format: pointer use to
 * Return: success.
 */
int _printf(const char *format, ...)
{
	unsigned int list = 0, cmp = 0;
	va_list args;

	va_start(args, format);

	for (; format[list] != '\0'; list++)
	{
		if (format[list] != '%')
		_myputchar(format[list]);
		else if (format[list + 1] == 'c')
		{
			_myputchar(va_arg(args, int));
			list++;
		}
		else if (format[list + 1] == 's')
		{
			int r_value = _string(va_arg(args, char *));

			list++;
			cmp += (r_value - 1);
		}
		else if (format[list + 1] == '%')
		{
			_myputchar('%');
			list++;
		}
		cmp += 1;
	}
	return (cmp);
}
