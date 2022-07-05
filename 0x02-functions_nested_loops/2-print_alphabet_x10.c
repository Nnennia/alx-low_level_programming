#include "main.h"

/**
 * function that prints abc's in lowercase x10
 * 
 * Return: Always (Success)
 */
void print_alphabet_x10(void)
{
    int num, i;

    for (num = 0; num <=9; num++)
    {
        for (i = 'a'; i <= 'z'; i++)
        {
            _putchar(i);

        }
        _putchar('\n');
    }

}
