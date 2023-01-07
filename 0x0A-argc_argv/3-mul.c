#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: Argument counts
 * @argv: arguments
 * Return: 0 if it works, 1 if there is an Error
 */
int main(int argc, char **argv)
{
	int x, y, diff;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	diff = x * y;
	printf("%i\n", diff);

	return (0);
}
