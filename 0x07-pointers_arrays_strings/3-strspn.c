#include "main.h"

/**
 * _strspn - gets the length of the initial substring
 * @s: string to be scanned
 * @accept: the initial segment to be calculated
 *
 * Return: return the number of bytes in the intital segment of s
 *         which only consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bytes++;
				break;
			}

			else if (accept[x + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
