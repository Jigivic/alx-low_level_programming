#include "main.h"

/**
 * main - to print in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');

	return (0);
}

