#include "main.h"
#include <stdio.h>

/**
 * void print_most_numbers - prints the numbers from 0-9
 * 
 * Return: always 0
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
