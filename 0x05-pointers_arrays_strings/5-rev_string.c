#include "main.h"
/**
* rev_string - reverse a string
* @s: input string
*
* Description: reverses a string.
* Return: Always (0)
*/

void rev_string(char *s)
{
	int v, y, temp;

	v = 0;
	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (y > v)
	{
		temp = s[y];
		s[y--] = s[v];
		s[v++] = temp;
	}
}
