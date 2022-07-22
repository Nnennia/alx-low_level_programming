#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies the arguments
 * @argc: the argument count
 * @argv: thye arrray of argument
 * return: Zero
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return 0;
}
