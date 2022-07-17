#include "main.h"

/**
 * strpbrk - locates a string for any set of bytes
 * @s: string to be scanned
 * @accept: containing the caharacters to match
 *
 * Return: a pointer to the character if a set is matched
 *         else returns NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while(*s)
	{
		for(x = 0; accept[x]; x++)
		{
			if(*s == accept[x])
			    return (s);
		}

		s++;
	}

	return ('\0');
}
