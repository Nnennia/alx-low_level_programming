#include <stdio.h>
/**
 * main - program that prints out the name of file
 * @argc: counts the arguments
 * @argv: array of arguments
 * Return: void
 */
void main(int argc, char *argv[])
{
	int i;
	for ( i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
