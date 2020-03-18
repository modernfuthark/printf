#include "holberton.h"

/**
 * format_switch - function print variables according to specifier
 * @spec: pointer to specifier
 * Return: string length
 */
int format_switch(const char *spec, ...)
{
	int slen = 0, var;
	va_list arg;

	va_start(arg, spec);
	switch (*spec)
	{
	case 'd': /* print numbers */
	case 'i': /* print integers */
		var = va_arg(arg, int);
		slen += itoa(var, 10);
		break;
	case 'b': /* print binary */
		var = va_arg(arg, int);
		slen += itoa(var, 2);
		break;
	case 'u': /* print unsigned int */
		var = va_arg(arg, unsigned int);
		slen += itoa(var, 10);
		break;
	case 'o': /* print octal */
		var = va_arg(arg, int);
		slen += itoa(var, 8);
		break;
	case 'x': /* print hexidecimal */
		var = va_arg(arg, int);
		slen += itoa(var, 16);
		break;
	}
		return (slen);
}
