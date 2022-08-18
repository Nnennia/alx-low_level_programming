#include <stdio.h>
#include "math.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index from 0
 * @n: bit value in the index
 * Return: value of the bit, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
