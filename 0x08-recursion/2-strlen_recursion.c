#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: Always
 */

int _strlen_recursion(char *s)
{
	if (*s > '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s)
	}

	return (s);
}
