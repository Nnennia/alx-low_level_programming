#include "main.h"
#include <stdio.h>

/**
 * print_numbers - return 0-9
 */

void print_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
