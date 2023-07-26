#include "main.h"
/**
 * _printf - function output the format
 * @format: pointer use to
 * Return: success.
 */
int _printf(const char *format, ...)
{
	int index = 0, cmp = 0, cmp_func = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			if (!(format[index + 1] == ' ') && !format[index + 2])
			{
				cmp = -1;
				break;
			}
			cmp_func += get_func(format[index + 1], args);
			if (cmp_func == 0)
				cmp += _myputchar(format[index + 1]);
			if (cmp_func == -1)
				cmp = -1;
			index++;
		}
		else
(cmp == -1) ? (_myputchar(format[index])) : (cmp += _myputchar(format[index]));
		if (cmp != -1)
			cmp += cmp_func;
	}
	va_end(args);
	return (cmp);
}
