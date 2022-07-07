#include "main.h"
#include <stdio.h>

/**
 * _isdigit - return 1 if parameter is isdigit
 * @c: the character to check
 * Return:  0 (failure)
 */

int _isdigit(int c)
{

	int p;


	for (p = '0'; p <= '9'; p++)
	{

		if (p == c)
		{
			return (1);
		}
	}


	return (0);

}
