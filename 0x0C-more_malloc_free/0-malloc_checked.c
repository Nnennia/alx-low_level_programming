#include <stdio.h>

/**
 * malloc_checked - alloctaes memory using malloc
 * @b: Number of bytes to be allocated
 * Return: pointer to  the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocMemo = malloc(b);

	if (!allocMemo)
	{
		exit(98);
	}
	return (allocMemo);
}
