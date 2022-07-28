#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates the requested memory and return a pointer to it
 * @nmemb: Number of elements
 * @size: byte size of each of the array elements
 * Return: NULL if nmemb and size = 0, otherwise a pinter to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (!mem)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
