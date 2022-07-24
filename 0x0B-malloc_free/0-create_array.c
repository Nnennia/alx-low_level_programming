#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of memory to be allocated
 * @c: charater to put in memory
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	for (y = 0; y < size; y++)
	{
		x[y] = c;
	}
	return (x);
}
