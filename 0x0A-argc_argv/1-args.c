#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: counts the argument
 * @argv: array of argument
 * Return : Zero
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);
	return 0;
}
