#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{

    int a;

    
    for(a = '0'; a <= '9'; a++)
    {
        
        if(a == c)
        {
            return (1);
        }
    }


    return (0);
    
}
