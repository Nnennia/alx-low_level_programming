#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 * return: int of number of words
 */
int wrdcnt(char *s)
{
	int x, n = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
			n++;
		}
		else if (x == 0)
			n++;
	}
	n++;
	return (n);
}
