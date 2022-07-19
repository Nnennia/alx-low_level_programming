#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line
 * @s: pointer
 * Return: void
 */

void_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
