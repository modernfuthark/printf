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

/**
 * _strdup - Duplicates a string
 * @str: String
 * Return: Pointer to new string, NULL if malloc failed
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		++len;

	copy = malloc((sizeof(char) * len) + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	/*copy[i] = '\0';*/
	return (copy);
}

/**
 * cap_string - Capitalize a string
 * @str: String
 * Return: Pointer to string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 98 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
