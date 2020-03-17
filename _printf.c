#include "holberton.h"

/**
 * _printf - function to print strings of varying types
 * @format: string to itterate
 * Return: bytes printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index; /* keep track of location in format */
	int slen; /* bytes printed */

	va_start(args, format);

	/* print string */
	for (slen = 0, index = 0; format && format[index]; index++, slen++)
	{
		/* check for format specifier */
		if (format[index] == '%')
		{
			index++;
/*			if (flag)*/
				/* adjust output */

			slen += format_switch((format + index), va_arg(args, void *));
		}
	
		else if (format[index != '%'])
			_putchar(format[index]);
	}

	va_end(args);
	return (slen - 1);
}
