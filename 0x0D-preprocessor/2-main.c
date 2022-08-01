#include <stdio.h>

#define FILE_NAME __FILE__

/**
 * main - program that prints the name of the file it was compiled form
 * Return: 0
 */
int main(void)
{
	printf ("%s\n", FILE_NAME);
	return (0);
}
