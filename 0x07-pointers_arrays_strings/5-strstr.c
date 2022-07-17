#include "main.h"

/**
 * strstr - finds a substring
 * @haystack: the main c string to be scanned
 * @neddle: small string to br searched within haystack string
 *
 * Return: if substring is located - return pointer to the first occurance
 *         NULL if the sequence is not present in a haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int f;

	if(*needle == 0)
		return (haystack);

	while (*haystack)
	{
		f = 0;

		if (haystack[f] == needle[f])
		{
			do{
				if (needle[f + 1] == '\0')
					return (haystack);

				f++;

			} while (haystack[f] == needle[f]);
		}

		haystack++;
	}

	return ('\0');
}
