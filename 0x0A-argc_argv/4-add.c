#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds the postive numbers
 * @argc: The arguement count
 * @argv: The array of argument
 * Return: Zero
 */
int main(int argc,char *argv[])
{
	int y = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (y = 1; y < argc; y++)
		{
			if (!isdigit(*argv[y]))
			{
				printf("Error\n");
			}
			else
			{
				sum += atoi(argv[y]);
			}
		}
		printf("%d\n", sum);
	}

	return 0;

}
