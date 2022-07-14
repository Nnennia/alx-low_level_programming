#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two string together
 * @src: parameter to append to dest
 * @dest: parameter to be appended to
 * @n: maximum number bytes usable
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
