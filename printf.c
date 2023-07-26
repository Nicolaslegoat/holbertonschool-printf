#include "main.h"
/**
 * _printf - function output the format
 * @format: pointer use to
 * Return: success.
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
>>>>>>> 960c3c4ef57b5ed99a6f62919f76b36c30cd2476
