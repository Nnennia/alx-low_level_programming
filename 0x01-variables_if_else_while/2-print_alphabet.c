#include<stdio.h>

/**
 * Program that prints the alphabet in lowercase followed by a new line
 * Return : always 0
 */
int main (void)
{
    int ch;
    for(ch = 97; ch <= 122; ch++);
    {
        putchar(ch);
    }
    putchar(10);

    return (0);
}
