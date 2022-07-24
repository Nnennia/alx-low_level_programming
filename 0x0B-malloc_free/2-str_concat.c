#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings together
 * @s1: String one
 * @s2: string two
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *empty;
	int y, len1, len2, x;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	y = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	y = 0;
	while (y < len1)
	{
		s3[y] = s1[x];
		y++;
	}
	x = 0;
	while (x <= len2)
	{
		s3[y] = s2[x];
		y++;
		x++;
	}
	return (s3);
}
