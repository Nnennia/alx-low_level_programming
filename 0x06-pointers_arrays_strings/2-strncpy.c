#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: pointer to the copied string
 * @src: pointer to the string to be copied
 * @n: int
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
