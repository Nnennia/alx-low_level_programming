#include "main.h"
/**
 * _strstr - finds a substring
 * @haystack: the main c string to be scanned
 * @neddle: small string to be searched within haystack string
 * Return: if substring is located - return pointer to the first occurrence
 * NULL if the sequence is not present in a haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
