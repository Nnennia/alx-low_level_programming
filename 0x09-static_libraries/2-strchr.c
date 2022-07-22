#include "main.h"

/**
 * _strchr - searches a character in a string
 * @s: The c string to be scanned
 * @c: the character to be searched in str
 * Return: pointer to the first occurance if c is found.
 *         NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}

	return ('\0');
}
