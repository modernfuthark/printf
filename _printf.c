#include "holberton.h"

/**
 * _printf - function to print strings of varying types
 * @format: string to itterate
 * Return: bytes printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int slen, index;
	char *str = NULL;

	if (!format)
		return (-1);
	va_start(args, format);
	for (slen = 0, index = 0; format && format[index]; index++, slen++)
	{
		if (format[index] == '%') /* check format specifier */
		{
			index++;
/*			if (flag)*/
			if (format[index] == '%')
				_putchar('%');
			else if (format[index] == 'c')
				slen += _putchar(va_arg(args, int));
			else if (format[index] == 's')
			{
				str = _strdup(va_arg(args, char *));
				slen += printer(str, 0);
				free(str);
			}
			slen += format_switch((format + index), va_arg(args, void *));
		}
		else if (format[index] != '%')
			_putchar(format[index]);
	}
	va_end(args);
	return (slen);
}
