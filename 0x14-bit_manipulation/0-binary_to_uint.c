#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - function that converts a binary to an unsidned integer
 * @b: pointer to string of 0 and 1 char
 * Return: the converted number, 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;

	}
	return (value);
}
