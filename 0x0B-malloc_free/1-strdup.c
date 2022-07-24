#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Return: pointer to a null-terminated byte string,
 * which is a duplicate pof the string pointed to by s
 * @str: string to be duplicated
 * Return: pointer to a new string,
 * and NULL if it failed to make memory
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int y, z;

	if (str == NULL)
		return (NULL);
	y = z = 0;
	while (str[z] != '\0')
	{
		z++;
	}
	z++;
	x = malloc(z * sizeof(*str));
	if (x == NULL)
		return (NULL);
	while (y <= z)
	{
		x[y] = str[y];
		y++;
	}
	return (x);
}
