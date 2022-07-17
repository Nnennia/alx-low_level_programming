#include "main.h"

/**
 * *_memset - fill a block of memory with a particular value
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++, n--)
	{
		s[j] = b;
	}

	return (s);
}
