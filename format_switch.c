#include "holberton.h"

/**
 * format_switch - function print variables according to specifier
 * @spec: pointer to specifier
 * Return: string length
 */

int format_switch(char spec, ...)
{
	int slen = 0; 
	int var;
	char *str;
	va_list arg;

	vastart(arg, spec);
	switch(spec) {
	case '%' :
		_putchar('%');
		slen++;
		return (slen);

	case 'c' :
		var = va_arg(arg, int)
		_putchar(var);
		slen++;
		return (slen);

	case 's' :
		str = va_arg(arg, char *);
		/* print string */
		return (slen);

	case 'd' :
		var = va_arg(arg, int);
		/* print numbers */
		return (slen);

	case 'i' :
		var = va_arg(arg, int);
		/*print numbers */
		return (slen);

	case 'b' :
		var = va_arg(arg, int);
		/* print binary */
		return (slen);
	}
}
