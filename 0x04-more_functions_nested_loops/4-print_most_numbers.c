#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - return  0-9 skips 2 and 4
 */

void print_most_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
