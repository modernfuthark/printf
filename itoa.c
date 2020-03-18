#include "holberton.h"
/**
 * printer - Print a string, specifically for itoa
 * @str: String to print
 * Return: Length of string printed
 */
int printer(char *str, int cap)
{
	int i;

	if (cap == 1)
		cap_string(str);
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * itoa - Int to Alpha
 * @n: Number to convert
 * @base: Base of conversion
 * Return: Length of string converted
 */

int itoa(int n, int base, int cap)
{
	int i = 0, negFlag = 0, rem = 0, slen = 0;
	char *buffer;

	buffer = malloc((sizeof(char) * digitLen(n)) + 2);
	if (!buffer)
		return (-1);

	if (n == 0)
	{
		buffer[i] = '0';
		buffer[++i] = '\0';
		return (printer(buffer, 0));
	}

	if (n < 0 && base == 10)
		negFlag = 1;
	if (n < 0)
		n = n * -1;

	while (n != 0)
	{
		rem = n % base;
		buffer[i] = (rem > 9) ? ((rem - 10) + 'a') : (rem + '0');
		n = n / base;
		i++;
	}

	if (negFlag == 1)
		buffer[i++] = '-';
	buffer[i] = '\0';
	buffer = rev_string(buffer);
	slen = printer(buffer, cap);
	free(buffer);
	return (slen);
}
