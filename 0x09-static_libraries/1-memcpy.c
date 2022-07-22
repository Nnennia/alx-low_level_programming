#include "main.h"

/**
 * _memcpy - copies numBytes memory area pointed
 * @dest: pointer to copy @src into
 * @src: source buffer to copy characters from
 * @n: number of bytes to copy from src
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;


	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
