#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: doubles the pointer to arguments
 * Return: pointer to new string, NULL if there's an error
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, n = 0;
	char *d;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n++;
		n++;
	}
	n++;
	d = malloc(n * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			d[z] = av[x][y];
			z++;
		}
		d[z] = '\n';
		z++;
	}
	d[z] = '\n';
	return (d);
}
