#include "main.h"
/**
 * _printf - function output the format
 * @format: pointer use to
 * Return: success.
 */
int _printf(const char *format, ...)
{
    int index = 0, cmp = 0;
    va_list args;

    va_start(args, format);

    if (!format || (format[0] == '%' && !format[1]) || (format[0] == '%' && format[1] == ' ' && !format[2]))
        return (-1);

    for (; format[index]; index++)
    {
        if (format[index] == '%')
        {
            cmp += get_func(format[index + 1], args);
            index++;
        }
        else
        {
            cmp += _myputchar(format[index]);
        }
    }

    va_end(args);
    return (cmp);
}
