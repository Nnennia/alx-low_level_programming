#include "main.h"

/**
 * Function that checks for lowercase characters
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
