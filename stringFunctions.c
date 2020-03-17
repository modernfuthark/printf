#include "holberton.h"
/**
 * digitLen - Gets the length in digits of n
 * @n: Number
 * Return: Length of n in digits
 */

int digitLen(int n)
{
	int len = 0;

	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

/**
 * rev_string - Reverse a string
 * @str: String
 * Return: Reversed string
 */

char *rev_string(char *str)
{
	int len = 0, end, i;
	char *result;

	while (str[len])
		++len;

	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);

	for (i = 0, end = len - 1; i < len; i++, end--)
		result[i] = str[end];

	result[i++] = '\0';
	return (result);
}